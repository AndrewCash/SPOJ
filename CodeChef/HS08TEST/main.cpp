// Cash
// https://www.codechef.com/problems/HS08TEST

#include <iostream>
using namespace std;

int main() {
    
    float withdrawal = 0;
    float balance = 0;

    cin >> withdrawal;
    cin >> balance;
    
    if (withdrawl % 5 != 0)
        return 0;

    if ((balance + 0.5) > withdrawl ) {
        balance = balance - withdrawal - 0.5;
        cout << balance << endl;
    }
    return 0;
}
