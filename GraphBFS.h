//
// Created by Софія Ксенофонтова  on 2020-04-18.
//

#ifndef PROJECT_XENOFONTOVA_GRAPHBFS_H
#define PROJECT_XENOFONTOVA_GRAPHBFS_H

#include<iostream>
#include <list>

// Program to print BFS traversal from a given
// source vertex. BFS(int s) traverses vertices
// reachable from s.
// This class represents a directed graph using
// adjacency list representation

using namespace std;


class GraphBFS
{
public:
    list<int> *adj;

    GraphBFS(int V);

    ~GraphBFS();

    // function to add an edge to graph
    void addEdge(int v, int w);

    // prints BFS traversal from a given source s
    void BFS(int s);

    int getVertex(GraphBFS &, const int &);

    const int getID() const {
        return GraphBFSID;
    };

private:

    const int GraphBFSID;
    static int freeID;

    int V;    // number of vertices

};

//ostream &operator<<(ostream &, GraphBFS &);





















#endif //PROJECT_XENOFONTOVA_GRAPHBFS_H
