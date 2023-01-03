#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

bool dij(ll V, ll src, vector<pair<ll, ll>> adj[], ll dest, ll thres) {
    vector<ll> dist(V, 1e8);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    vector<ll> parent(V, -1);

    pq.push({0, src});
    dist[src] = 0;
    parent[src] = src;

    while (!pq.empty()) {
        auto curr = pq.top();
        pq.pop();
        ll currdist = curr.first;
        ll currnode = curr.second;

        for (auto x : adj[currnode]) {
            if (((x.second + currdist) < dist[x.first])) {
                dist[x.first] = x.second + currdist;
                pq.push({dist[x.first], x.first});
                parent[x.first] = currnode;
            }
        }
    }

    ll nd = dest;
    stack<ll> st;
    st.push(nd);

    while (nd != parent[nd]) {
        st.push(parent[nd]);
        nd = parent[nd];
    }

    while (!st.empty()) {
        if (dist[st.top()] > thres)
            return false;
        st.pop();
    }

    return true;
}

int main() {
    ll V, q;
    cin >> V >> q;

    vector<pair<ll, ll>> adj[V];

    ll count = 0;

    for (ll i = 0; i < V; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    while (q--) {
        ll src, dest, thres;
        cin >> src >> dest >> thres;

        bool ans = dij(V + 1, src, adj, dest, thres);

        if (ans == true)
            count++;
    }

    cout << count << "\n";

    return 0;
}

/*
4 2
0 1 5
1 2 6
2 3 7
0 3 4
0 3 5
1 0 3
*/