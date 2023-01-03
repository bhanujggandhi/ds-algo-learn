#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> src,
                     pair<int, int> dst) {

        if (grid[src.first][src.second] == 0 or grid[dst.first][dst.second] == 0)
            return -1;

        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int, pair<int, int>>> q;
        vector<vector<bool>> vis(rows, vector<bool>(cols, false));

        q.push({1, {src.first, src.second}});
        vis[src.first][src.second] = true;

        vector<int> dx = {1, -1, 0, 0};
        vector<int> dy = {0, 0, 1, -1};
        int ans = INT_MAX;

        while (!q.empty()) {
            auto curr = q.front();
            int currdist = curr.first;
            auto currcord = curr.second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nx = currcord.first + dx[i];
                int ny = currcord.second + dy[i];

                if (nx >= 0 and ny >= 0 and nx < rows and ny < cols and !vis[nx][ny] and (nx != dst.first or ny != dst.second) and grid[nx][ny] == 1) {
                    q.push({currdist + 1, {nx, ny}});
                    vis[nx][ny] = true;
                }

                if (nx == dst.first and ny == dst.second) {
                    ans = min(ans, currdist);
                }
            }
        }
        return ans;
    }
};

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

/*
1
5 4
1 1 1 1
1 1 0 1
1 1 1 1
1 1 0 0
1 0 0 1
0 1
2 2

 */