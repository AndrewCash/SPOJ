// Andrew Cash 2018
// https://www.codechef.com/problems/COINS

#include <stdio.h>
using namespace std;

int exchange(long long int num) {
    int a = (num / 2);
    int b = (num / 3);
    int c = (num / 4);

    if ((a + b + c) > num)
        return (a + b + c);
    else
        return num;

}

int main(){
    long long int num = 0;
    while (0 <= num && num <= 1000000000) {
        scanf ("%lld", &num);
        num = exchange(num);
        printf ("%lld\n", num);
        num = 0;
    }

    return 0;
}
