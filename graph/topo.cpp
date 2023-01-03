#include <bits/stdc++.h>

using namespace std;

void dfs(int src, stack<int> &st, vector<bool> &vis, vector<int> adj[]) {
    vis[src] = true;
    for (auto x : adj[src]) {
        if (vis[x] == false) {
            dfs(x, st, vis, adj);
        }
    }
    st.push(src);
}

vector<int> topoSort(int V, vector<int> adj[]) {
    stack<int> st;
    vector<bool> vis(V, false);
    for (int i = 0; i < V; i++) {
        if (vis[i] == false) {
            dfs(i, st, vis, adj);
        }
    }

    vector<int> ans;
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
}

int main() {

    return 0;
}