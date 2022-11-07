#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n, m;
  int adjmat[n + 1][m + 1];

  while (m--)
  {
    int u, v;
    cin >> u >> v;
    adjmat[u][v] = 1;
    adjmat[v][u] = 1;
  }
  return 0;
}

int main()
{
  int n, m;
  cin >> n, m;
  vector<int> adjlist[n + 1];

  while (m--)
  {
    int u, v;
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
  }

  return 0;
}