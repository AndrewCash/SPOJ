// Andrew Cash
// https://www.codechef.com/INOIPRAC/problems/INOI1402

#include <iostream>
using namespace std;

// Flight node. 
class Flight { 
    public:
        Flight();
        void insertNode(int X, int Y);
        
    private:
        int price;
        
};

int main() {
    int C, F;       // C = # of cities
    cin >> C >> F;  // F = # of cities connected
    

    // Add flights to map
    int x, y, p;
    for (int i=0; i<F+1; i++) {
        cin >> x; // Ordered pair of cities 
        cin >> y; // connected by flights.
        cin >> p; // Price of flight
    }

    return 0;
}
