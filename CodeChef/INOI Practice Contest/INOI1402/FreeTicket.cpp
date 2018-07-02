// Andrew Cash
// https://www.codechef.com/INOIPRAC/problems/INOI1402

#include <bits/stdc++.h>
using namespace std;

// Add edge to graph
//  u = vertex represented by index of vector
//  v = vertex connected to index vertex
//  price = weight of edge
void addFlight(vector<pair<int, int> > AdjMatrix[], int u, int v, int price) 
{ 
    AdjMatrix[u].push_back(make_pair(v, price));
    AdjMatrix[v].push_back(make_pair(u, price));
}

void printGraph(vector<pair<int, int> > AdjMatrix[], int Cities)
{
    int v, w;
    for (int i=0; i<Cities; i++)
    {
        cout << "City " << i << " has a connecting flight with \n";
        for (auto it = AdjMatrix[i].begin(); it!=AdjMatrix[i].end(); it++)
        {
            v = it->first;
            w = it->second;
            cout << "city " << v << " with price = " << w << "\n";
        }
    }
}

int main() {
    int C, F;       // C = # of cities / verticies
    cin >> C >> F;  // F = # of cities connected / edges
 
    // Vector contains adjacency matrix for graph.
    // Vertex 1 = index of vector
    // Vertex 2 = first int
    // Weight   = second int
    vector<pair<int, int> > AdjMatrix[C];

    // Add flights to map
    int x, y, p;
    for (int i=0; i<F+1; i++) {
        cin >> x; // Ordered pair of cities 
        cin >> y; // connected by flights.
        cin >> p; // Price of flight.

        addFlight(AdjMatrix, x, y, p);
    }

    return 0;
}
