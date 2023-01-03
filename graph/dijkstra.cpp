#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<pair<int, int>> adj[(n + 1)];
    vector<int> parent(n + 1);
    vector<int> dist(n + 1);

    for (int i = 0; i < m; i++) {
        adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
    }

    pq.push({0, 1});
    parent[1] = 1;
    dist[1] = 0;

    while (!pq.empty()) {
        auto curr = pq.top();
        pq.pop();

        int currdist = curr.first;
        int currnode = curr.second;

        for (auto it : adj[currnode]) {
            if (currdist + it.second < dist[it.first]) {
                dist[it.first] = currdist + it.second;
                pq.push({dist[it.first], it.first});
                parent[it.first] = currnode;
            }
        }
    }

    for (auto x : parent) {
        cout << x << " ";
    }
    cout << "\n";

    return dist;
}
