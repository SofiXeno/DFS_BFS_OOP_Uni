#include <iostream>
#include "GraphBFS.h"
#include "GraphDFS.h"

using namespace std;


int main() {
    cout << endl;
    cout << "Project developed by Xenofontova Sofia IPZ-2 \n" << endl;

    cout << "START: \n" << endl;

    cout << "************* Testing Graph BFS ************* \n" << endl;

    GraphBFS g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);


    cout << "Return all vertex for BFS Graph" << endl;
    cout << g.getVertex(g, 0) << endl;
    cout << g.getVertex(g, 1) << endl;
    cout << g.getVertex(g, 2) << endl;
    cout << g.getVertex(g, 3) << endl;
    cout << endl;

    cout << "Following is Breadth First Traversal (starting from vertex 0) \n";
    g.BFS(0);
    cout << "\nFollowing is Breadth First Traversal (starting from vertex 1) \n";
    g.BFS(1);
    cout << "\nFollowing is Breadth First Traversal (starting from vertex 2) \n";
    g.BFS(2);
    cout << "\nFollowing is Breadth First Traversal (starting from vertex 3) \n";
    g.BFS(3);

    cout << "\n" << endl;

    cout << "************* Testing Graph DFS *************\n" << endl;

    GraphDFS g2(5);

    g2.addEdge(0, 1);
    g2.addEdge(0, 2);
    g2.addEdge(1, 2);
    g2.addEdge(2, 0);
    g2.addEdge(2, 3);
    g2.addEdge(3, 3);
    g2.addEdge(4, 4);

    cout << "Return all vertex for BFS Graph" << endl;
    cout << g2.getVertex(g2, 0) << endl;
    cout << g2.getVertex(g2, 1) << endl;
    cout << g2.getVertex(g2, 2) << endl;
    cout << g2.getVertex(g2, 3) << endl;
    cout << g2.getVertex(g2, 4) << endl;
    cout << endl;

    cout << "Following is Depth First Traversal (starting from vertex 0) \n";
    g2.DFS(0);
    cout << "\nFollowing is Depth First Traversal (starting from vertex 1) \n";
    g2.DFS(1);
    cout << "\nFollowing is Depth First Traversal (starting from vertex 2) \n";
    g2.DFS(2);
    cout << "\nFollowing is Depth First Traversal (starting from vertex 3) \n";
    g2.DFS(3);
    cout << "\nFollowing is Depth First Traversal (starting from vertex 4) \n";
    g2.DFS(4);



    return 0;
}