#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    string findOrder(string dict[], int N, int K) {
        vector<char> adj[26];
        vector<char> indegree(26, 0);

        for (int i = 0; i < N - 1; i++) {
            int j = 0;
            int len1 = dict[i].length();
            int len2 = dict[i + 1].length();

            while (j < len1 and j < len2) {
                if (dict[i][j] == dict[i + 1][j]) {
                    j++;
                    continue;
                }

                else {
                    adj[dict[i][j] - 'a'].push_back(dict[i + 1][j] - 'a');
                    indegree[dict[i + 1][j] - 'a']++;
                    break;
                }
                j++;
            }
        }

        queue<int> q;
        string ans = "";

        for (int i = 0; i < 26; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();
            ans.push_back(curr + 'a');

            for (auto x : adj[curr]) {
                indegree[x]--;
                if (indegree[x] == 0) {
                    q.push(x);
                }
            }
        }

        return ans;
    }
};

string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];

        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if (f)
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}

/*
1
5 4
baa abcd abca cab cad
 */