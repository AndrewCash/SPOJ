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
