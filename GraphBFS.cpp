//
// Created by Софія Ксенофонтова  on 2020-04-18.
//

#include "GraphBFS.h"

#include <iostream>
#include <list>


int GraphBFS::freeID = 1;


GraphBFS::GraphBFS(int V) : GraphBFSID(
        freeID++) {
    this->V = V;
    adj = new list<int>[V];
}

GraphBFS::~GraphBFS() {
    delete[] adj;
}

void GraphBFS::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v’s list.
}

void GraphBFS::BFS(int s) {
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    list<int> queue;

    visited[s] = true;
    queue.push_back(s);

    list<int>::iterator i;

    while (!queue.empty()) {

        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

int GraphBFS::getVertex(GraphBFS &g, const int &i) {
    list<int>::iterator it = g.adj->begin();
    advance(it, i);
    return *it;

}


//ostream &operator<<(ostream &os, GraphBFS &g) {
//    for (int i=0; i<g.adj->size(); i++) {
//        os <<"GraphBFS number: "<< g.getID() <<g.getVertex(g,i)<<"; ";
//        return os;
//    }
//}
