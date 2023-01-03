#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        // priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
        //                greater<pair<int, pair<int, int>>>>
        //     pq;

        queue<pair<int, pair<int, int>>> q;

        vector<pair<int, int>> adj[n];

        for (int i = 0; i < flights.size(); i++) {
            int from = flights[i][0];
            int to = flights[i][1];
            int cost = flights[i][2];

            adj[from].push_back({to, cost});
            // adj[to].push_back({from, cost});
        }

        vector<int> dist(n, 1e8);
        q.push({-1, {src, 0}});
        dist[src] = 0;

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            int stop = curr.first;
            int node = curr.second.first;
            int currdist = curr.second.second;

            if (stop >= K)
                break;

            for (auto x : adj[node]) {
                if (currdist + x.second < dist[x.first]) {
                    dist[x.first] = currdist + x.second;
                    q.push({stop + 1, {x.first, dist[x.first]}});
                }
            }
        }

        if (dist[dst] == 1e8)
            return -1;
        return dist[dst];
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int edge;
        cin >> edge;
        vector<vector<int>> flights;

        for (int i = 0; i < edge; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }

        int src, dst, k;
        cin >> src >> dst >> k;
        Solution obj;
        cout << obj.CheapestFLight(n, flights, src, dst, k) << "\n";
    }
    return 0;
}