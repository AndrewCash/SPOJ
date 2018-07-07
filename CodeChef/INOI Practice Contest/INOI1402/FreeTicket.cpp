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

const bool DEBUG = true;

// Add edge to graph
//  u = vertex represented by index of vector
//  v = vertex connected to index vertex
//  price = weight of edge
void addFlight(vector<pair<int, int> > AdjMatrix[], int u, int v, int price)
{
    if (DEBUG) {cout << "Adding flight...\n";}

    AdjMatrix[u].push_back(make_pair(v, price));
    AdjMatrix[v].push_back(make_pair(u, price));

    // push_back - adds element to end of vector
}

// Print information about which citites are connected to
// each city and the price to get there.
void printGraph(vector<pair<int, int> > AdjMatrix[], int Cities)
{
    if (DEBUG) {cout << "Printing map...\n";}

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

// Helper method for findCheapestRouteFromOneCitytoAnother()
int findCheapestRouteFromCurrentCitytoEndCityHelper(vector<pair<int, int> > AdjMatrix[],
                                              int routePrice,
                                              vector <bool> shortestPathSet,
                                              int currentCity,
                                              int endCity)
{
    if (DEBUG) {cout << "-->Looking for route from " << currentCity << " to " << endCity;

                cout << ". Price = " << routePrice << endl;
               }





}

// Find cheapest route between City 1 and City 2
// Recursive
int findCheapestRouteFromOneCitytoAnother(vector<pair<int, int> > AdjMatrix[], int citites, int start, int end)
{
    if (DEBUG) {cout << "Finding cheapest route from " << start << " to " << end << endl;}

    // v = it->first;  // Vertex of second city in coordinate pair
    // w = it->second; // Weight of second city in coordinate pair

    int routePrice = 0;

    vector <bool> shortestPathSet = { false }; // Truth value wheter or not a city is in current path
                                   // Keeps us from retracing steps
    shortestPathSet[start] = true;

    // Loop through nodes connected to first node.
    for (auto it = AdjMatrix[start].begin(); it!=AdjMatrix[start].end(); it++)
    {
        routePrice = 0;

        if (isConnected(AdjMatrix, start, it->first))
        {
            routePrice += it->second;
            shortestPathSet[it->first] = true;

            findCheapestRouteFromCurrentCitytoEndCityHelper(AdjMatrix, routePrice, shortestPathSet, it->first, end);
        }
    }


    return routePrice;
}

// Find maximum cheapest route between any pair of cities.
// Loop through each pair of cities and find cheapest route.
// Return maximum cheapest route between any two cities.
void findMaxCheapestRoute(vector<pair<int, int> > AdjMatrix[], int Cities)
{
    if (DEBUG) {cout << "Looking for the MAXIMUM cheapest route\n";}

    int maxCheapestRoutePrice = 0;
    int cheapestRoutePrice = 0;

    // Loop through first city in pair.
    for (int i = 1; i < Cities + 1; i++)
    {

        // Loop through second city in pair
        for (int j = 1; j < Cities + 1; j++)
        {
            if (i == j)
                continue;

            // Look for cheapest route between cities i and j
            cheapestRoutePrice = 0;

            cheapestRoutePrice = findCheapestRouteFromOneCitytoAnother(AdjMatrix, Cities, i, j);

            if (maxCheapestRoutePrice < cheapestRoutePrice)
                maxCheapestRoutePrice = cheapestRoutePrice;
        }
    }

    if (DEBUG) {cout << "\nMaximum cheapest route is: ";}
    cout << maxCheapestRoutePrice << endl;
}



int main() {
    int Cities, Flights;       // C = # of cities / verticies
    cin >> Cities >> Flights;  // F = # of pairs of cities connected / edges

    // Array of vectors containing pairs of ints with adjacency matrix info for graph.
    // Vertex / city 1 = index of vector
    // Vertex / city 2 = first int of pair
    // Weight = second int of pair
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

    if (DEBUG) {printGraph(AdjMatrix, Cities);}

    findMaxCheapestRoute(AdjMatrix, Cities);

    return 0;
}
