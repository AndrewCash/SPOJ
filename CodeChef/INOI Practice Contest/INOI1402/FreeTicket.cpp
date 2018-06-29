// Andrew Cash
// https://www.codechef.com/INOIPRAC/problems/INOI1402

#include <iostream>
using namespace std;

class Map {
    public:
        Map();
        Map(int C, int F);
        ~Map();
        void addFlight();
    private:
        int Cities;  // number of cities on the network
        int Flights; // number of pairs of cities connected by a direct flight
        int Map[Cities][Cities];
}

void addFlight(int data[][], int price) {

}

int main() {
    int C, F;       // C = # of cities
    cin >> C >> F;  // F = # of cities connected
 
    int Map[C][C];

    // Add flights to map
    int x, y, p;
    for (int i=0; i<F+1; i++) {
        cin >> x; // Ordered pair of cities 
        cin >> y; // connected by flights.
        cin >> p; // Price of flight
    }

    return 0;
}
