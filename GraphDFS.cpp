//
// Created by Софія Ксенофонтова  on 2020-04-18.
//

#include "GraphDFS.h"
#include <list>


GraphDFS::GraphDFS(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

GraphDFS::~GraphDFS() {
 delete[] adj;
}

void GraphDFS::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void GraphDFS::DFSUtil(int v, bool visited[])
{

    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
void GraphDFS::DFS(int v)
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    DFSUtil(v, visited);
}

int GraphDFS::getVertex(GraphDFS &g, const int &i) {
    list<int>::iterator it = g.adj->begin();
    advance(it, i);
    return *it;

}


