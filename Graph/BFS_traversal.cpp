#include <bits/stdc++.h>

using namespace std;

class Graph
{
    int vertices;

    list<int> *adj;

public:
    Graph(int vert);

    void addEdges(int a, int b);
    void BFS(int start);
};

//Creating the constructor
Graph::Graph(int vert)
{
    vertices = vert;
    adj = new list<int>[vert]; //adjacency list
}

void Graph::addEdges(int a, int b)
{
    adj[a].push_back(b);
}

void Graph::BFS(int start)
{
    bool visited_array[vertices];

    //Marked all the nodes as false
    for (int i = 0; i < vertices; i++)
    {
        visited_array[i] = false;
    }

    list<int> q;

    visited_array[start - 1] = true;

    //Now push the current vertex into the queue
    q.push_back(start);

    //We will be making one iterator
    list<int>::iterator itr;

    while (!q.empty())
    {

        start = q.front();
        cout << start << " ";
        q.pop_front();

        for (itr = adj[start].begin(); itr != adj[start].end(); itr++)
        {
            if (!visited_array[*itr - 1])
            {
                visited_array[*itr - 1] = true;
                q.push_back(*itr - 1);
            }
        }
    }
}

int main()
{
    int v;
    cin >> v;

    Graph graph(v);

    int edges;
    cin >> edges;

    int a, b;

    for (int i = 0; i < edges; i++)
    {
        cin >> a >> b;
        graph.addEdges(a, b);
    }

    graph.BFS(1);

    return 0;
}