// Andrew Cash
// https://www.codechef.com/problems/BFTT
// Complete

#include <iostream>
using namespace std;

bool hasThreeThrees(int input) {
    int numberOfThrees = 0;
    while (input > 0) {
        if (input % 10 == 3)
            numberOfThrees++;

        input = input / 10;
    }

    if (numberOfThrees >= 3)
        return true;
    else
        return false;
}

int COOK(int input)
{
    input++;

    while (!hasThreeThrees(input)){
        input++;
    }

    return input;
}

int main() {
    int testCases = 0;
    cin >> testCases;

    int input = 0;
    int output[testCases];

    for (int i=0; i<testCases; i++) {
        cin >> input;
        output[i] = COOK(input);
    }

    for (int i=0; i<testCases; i++) {
        cout << output[i] << endl;
    }
    return 0;
}
