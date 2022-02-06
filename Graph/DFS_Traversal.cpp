#include <bits/stdc++.h>
using namespace std;

// Graph class represents a directed graph
// using adjacency list representation
class Graph
{
    int vertices; // No. of vertices

    // Pointer to an array containing
    // adjacency lists
    list<int> *adj;

    // A recursive function used by DFS
    void DFSUtil(int a, bool visited[]);

public:
    Graph(int vert); // Constructor

    // function to add an edge to graph
    void addEdge(int a, int b);

    // DFS traversal of the vertices
    // reachable from v
    void DFS(int start);
};

Graph::Graph(int vert)
{
    vertices = vert;
    adj = new list<int>[vert];
}

void Graph::addEdge(int a, int b)
{
    adj[a].push_back(b); // Add w to v’s list.
}

void Graph::DFSUtil(int a, bool visited[])
{
    // Mark the current node as visited and
    // print it
    visited[a] = true;
    cout << a << " ";

    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[a].begin(); i != adj[a].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}

// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
void Graph::DFS(int start)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[vertices];
    for (int i = 0; i < vertices; i++)
        visited[i] = false;

    // Call the recursive helper function
    // to print DFS traversal
    DFSUtil(start, visited);
}

// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);

    return 0;
}
