#include <bits/stdc++.h>

using namespace std;

int main()
{

    int vertices;
    cin >> vertices;

    //creating the graph
    int graph[vertices][vertices];

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            if (i == j)
            {
                graph[i][j] = 0;
                continue;
            }
            graph[i][j] = 999;
        }
    }

    int directed;
    cin >> directed;

    int edges, a, b, cost;
    cin >> edges;

    for (int i = 0; i < edges; i++)
    {
        cin >> a >> b >> cost;

        //If it's undirected then we make connection for b to a also
        //In directed we graph we have only one sided connection a to b
        if (directed == 0)
            graph[b - 1][a - 1] = cost;

        graph[a - 1][b - 1] = cost;
    }

    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}