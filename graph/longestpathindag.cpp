//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
   public:
    vector<int> maximumDistance(vector<vector<int>> edges, int v, int e, int src) {
        vector<int> dist(v, INT_MIN);

        vector<pair<int, int>> adj[v];
        vector<int> indegree(v, 0);

        for (int i = 0; i < e; i++) {
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            indegree[edges[i][1]]++;
        }

        queue<int> q;

        for (int i = 0; i < v; i++) {
            if (indegree[i] == 0)
                q.push(i);
        }

        vector<int> topo;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            topo.push_back(curr);

            for (auto x : adj[curr]) {
                indegree[x.first]--;
                if (indegree[x.first] == 0) {
                    q.push(x.first);
                }
            }
        }

        for (auto x : topo) {
            cout << x << "  ";
        }

        return topo;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int v, e;
        cin >> v >> e;

        int src;
        cin >> src;
        vector<vector<int>> edges(e, vector<int>(3));
        for (auto &j : edges)
            cin >> j[0] >> j[1] >> j[2];

        Solution s;
        vector<int> ans = s.maximumDistance(edges, v, e, src);
        for (auto j : ans) {
            if (j == INT_MIN)
                cout << "INF ";
            else
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends