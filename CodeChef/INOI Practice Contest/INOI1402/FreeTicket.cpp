// Andrew Cash
// https://www.codechef.com/INOIPRAC/problems/INOI1402

// Goal:
/*

Some dude has won the contest and he is entitled to a free ticket
between any two destinations served by the airline. All cities served
by Drongo Airlines can be reached from each other by some sequence of
connecting flights. Nikhil is allowed to take as many connecting flights
as needed, but he must take the cheapest route between his chosen destinations.

Each direct flight between two cities has a fixed price. All pairs of
cities connected by direct flights have flights in both directions
and the price is the same in either direction. The price for a
sequence of connecting flights is the sum of the prices of the direct
flights along the route.

We would like to maximize the value of the prize, so we would like
to choose a pair of cities on the network for which the cost of
the cheapest route is as high as possible.

Output:
The output consists of a single integer,
the maximum cost among the cheapest routes
between all pairs of cities across the airline’s network.

*/

#include <iostream>
#include <vector>
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
    for (int i = 1; i < Cities + 1; i++)
    {
        cout << "City " << i << " has a connecting flight with \n";

        for (auto it = AdjMatrix[i].begin(); it!=AdjMatrix[i].end(); it++)
        {
            v = it->first;
            w = it->second;
            cout << "\tcity " << v << " with price = " << w << "\n";
        }
        cout << "\n";
    }
}

//What i want to do...

// Loop through pairs of cities.
// Find maximum cheapest route between any pair of cities.

int main() {
    int C, F;       // C = # of cities / verticies
    cin >> C >> F;  // F = # of pairs of cities connected / edges

    // Vector contains adjacency matrix for graph.
    // Vertex 1 = index of vector
    // Vertex 2 = first int
    // Weight   = second int
    // Adj Matrix array isn't zero indexed
    vector<pair<int, int> > AdjMatrix[C];

    // Add flights to map
    int x, y, p;
    for (int i=0; i<F+1; i++) {
        cin >> x; // Ordered pair of cities
        cin >> y; // connected by flights.
        cin >> p; // Price of flight.

        addFlight(AdjMatrix, x, y, p);
    }

    printGraph(AdjMatrix, C);




    return 0;
}
