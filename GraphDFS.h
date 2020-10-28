//
// Created by Софія Ксенофонтова  on 2020-04-18.
//

#ifndef PROJECT_XENOFONTOVA_GRAPHDFS_H
#define PROJECT_XENOFONTOVA_GRAPHDFS_H

#include <list>
#include <iostream>

using namespace std;



// Program to print DFS traversal from
// a given vertex in a  given graph
// Graph class represents a directed graph
// using adjacency list representation

class GraphDFS {

public:
    GraphDFS(int V);   // Constructor

    ~GraphDFS();

    void addEdge(int v, int w);

    void DFS(int v);

    int getVertex(GraphDFS &, const int &);

private:
    int V;    // number of vertices

    list<int> *adj;

    // A recursive function used by DFS
    void DFSUtil(int v, bool visited[]);

};


#endif //PROJECT_XENOFONTOVA_GRAPHDFS_H
