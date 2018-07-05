// Andrew Cash
// https://www.codechef.com/INOIPRAC/problems/INOI1402

/*
Goal:

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

    // push_back - adds element to end of vector
}

// Print information about which citites are connected to
// each city and the price to get there.
void printGraph(vector<pair<int, int> > AdjMatrix[], int Cities)
{
    int v, w;
    for (int i = 1; i < Cities + 1; i++)
    {
        cout << "City " << i << " has a connecting flight with \n";

        for (auto it = AdjMatrix[i].begin(); it!=AdjMatrix[i].end(); it++) // begin and end are array iterator
        {
            v = it->first;  // Vertex of second city in coordinate pair
            w = it->second; // Weight of second city in coordinate pair
            cout << "\tCity " << v << " with price = " << w << "\n";
        }
        cout << "\n";
    }
}

// Check if city u is connected to city v.
// If so, return true.
bool isConnected(vector<pair<int, int> > AdjMatrix[], int u, int v)
{
    for (auto it = AdjMatrix[u].begin(); it!=AdjMatrix[u].end(); it++)
    {
        if (v == it->first)
        {
            return true;
        }
    }

    return false;
}

int findCheapestRouteHelper(vector<pair<int, int> > AdjMatrix[], int routeDistance,
                            int currentNode, int end)
{
    return routeDistance;
}

// Find cheapest route between City 1 and City 2
int findCheapestRoute(vector<pair<int, int> > AdjMatrix[], int start, int end)
{
    // v = it->first;  // Vertex of second city in coordinate pair
    // w = it->second; // Weight of second city in coordinate pair

    int routeDistance = 0;
    int currentNode = start;

    while (currentNode != end)
    {
        // Loop through nodes connected to first node.
        for (auto it = AdjMatrix[currentNode].begin(); it!=AdjMatrix[currentNode].end(); it++)
        {
            routeDistance = 0;

            if (isConnected(AdjMatrix, currentNode, it->first))
            {
                routeDistance += it->second;
                findCheapestRouteHelper(AdjMatrix, routeDistance, currentNode, end);
            }
        }
    }

    return routeDistance;
}

// Find maximum cheapest route between any pair of cities.
// Loop through each pair of cities and find cheapest route.
// Return maximum cheapest route between any two cities.
int findMaxCheapRoute(vector<pair<int, int> > AdjMatrix[], int Cities)
{
    int cheapestRouteDistance = 0;
    int cheapestRoutePrice = 0;
    int routeDistance = 0;
    int routePrice = 0;

    // Loop through first city in pair.
    for (int i = 1; i < Cities + 1; i++)
    {

        // Loop through second city and weight
        for (auto it = AdjMatrix[i].begin(); it!=AdjMatrix[i].end(); it++)
        {


              if (cheapestRouteDistance < routeDistance)
              {
                  cheapestRouteDistance = routeDistance;
                  cheapestRoutePrice = routePrice;
              }
          }
    }

    return cheapestRoutePrice;
}



int main() {
    int Cities, Flights;       // C = # of cities / verticies
    cin >> Cities >> Flights;  // F = # of pairs of cities connected / edges

    // Vector contains adjacency matrix for graph.
    // Vertex 1 = index of vector
    // Vertex 2 = first int
    // Weight   = second int
    // Adj Matrix array isn't zero indexed
    vector<pair<int, int> > AdjMatrix[Cities];

    // Add flights to map
    int x, y, p;
    for (int i = 0; i < Flights; i++) {
        cin >> x; // Ordered pair of cities
        cin >> y; // connected by flights.
        cin >> p; // Price of flight.

        addFlight(AdjMatrix, x, y, p);
    }

    printGraph(AdjMatrix, Cities);




    return 0;
}
