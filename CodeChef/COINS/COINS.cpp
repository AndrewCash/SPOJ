// Andrew Cash 2018
// https://www.codechef.com/problems/COINS

#include <iostream>
using namespace std;

int exchange(int num) {
    int a = (num / 2);
    int b = (num / 3);
    int c = (num / 4);

    if ((a + b + c) > num)
        return (a + b + c);
    else
        return num;

}

int main(){
    int num;
    while (0 <= num && num <= 1000000000) {
        cin >> num;
        cout << exchange(num) << endl;
    }

    return 0;
}
