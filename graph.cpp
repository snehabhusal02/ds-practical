
#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // Adjacency Matrix
    int graph[4][4] = {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}
    };

    int visited[4] = {0};
    int q[10], front = 0, rear = 0;

    // Start BFS from vertex 0
    q[rear++] = 0;
    visited[0] = 1;

    while(front < rear)
    {
        int v = q[front++];

        for(int i = 0; i < n; i++)
        {
            if(graph[v][i] == 1 && !visited[i])
            {
                visited[i] = 1;
                q[rear++] = i;
            }
        }
    }

    // Display Adjacency Matrix
    cout << "Adjacency Matrix:" << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    // Check graph connectivity
    int connected = 1;

    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
            connected = 0;
    }

    if(connected)
        cout << "Graph is connected.";
    else
        cout << "Graph is not connected.";

    return 0;
}
