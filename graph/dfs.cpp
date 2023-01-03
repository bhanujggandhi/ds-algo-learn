#include <bits/stdc++.h>
using namespace std;

class Graph
{
  map<int, bool> visited;
  map<int, list<int>> adj;

public:
  void addEdge(int u, int v);

  void DFS(int u);
};

void Graph::addEdge(int u, int v)
{
  adj[u].push_back(v);
}

void Graph::DFS(int s)
{
  visited[s] = true;
  cout << s << " ";

  list<int>::iterator i;
  for (i = adj[s].begin(); i != adj[s].end(); i++)
  {
    if (!visited[*i])
      DFS(*i);
  }
}

int main()
{
  Graph g;

  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  cout << "DFS of the following graph starting from vertex 2 is: " << endl;

  g.DFS(2);

  return 0;
}