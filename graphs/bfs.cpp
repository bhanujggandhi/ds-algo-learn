#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &grid, vector<vector<int>> &ans) {
    queue<pair<int, pair<int, int>>> q;

    int rows = grid.size();
    int cols = grid[0].size();

    vector<vector<bool>> vis(rows, vector<bool>(cols, false));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                ans[i][j] = 0;
                q.push({0, {i, j}});
                vis[i][j] = true;
            }
        }
    }

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};

    while (!q.empty()) {
        auto curr = q.front();
        q.pop();

        int currx = curr.second.first;
        int curry = curr.second.second;

        for (int i = 0; i < 4; i++) {
            int newx = currx + dx[i];
            int newy = curry + dy[i];

            if (newx < rows and newx >= 0 and newy < cols and newy >= 0 and grid[newx][newy] == 0 and vis[newx][newy] == false) {
                ans[newx][newy] = curr.first + 1;
                q.push({curr.first + 1, {newx, newy}});
                vis[newx][newy] = true;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int k;
            cin >> k;
            grid[i][j] = k;
        }
    }

    vector<vector<int>> ans(n, vector<int>(m, -1));

    solve(grid, ans);

    for (auto x : ans) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
