#include <bits/stdc++.h>
using namespace std;

class Solution {
   private:
    bool check(int src, int V, vector<int> adj[], vector<int> &color) {
        queue<int> q;
        q.push(0);
        color[src] = 0;

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            for (auto x : adj[curr]) {
                if (color[x] == -1) {
                    color[x] = color[curr] == 0 ? 1 : 0;
                    q.push(x);
                } else {
                    if (color[x] == color[curr]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }

   public:
    bool isBipartite(int V, vector<int> adj[]) {
        vector<int> color(V, -1);

        for (int i = 0; i < V; i++) {
            if (color[i] == -1) {
                if (check(i, V, adj, color) == false)
                    return false;
            }
        }
        return true;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isBipartite(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}