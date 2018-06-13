//Andrew Cash 2018
// https://www.codechef.com/problems/HORSES

#include <iostream>
using namespace std;

void sort(int Data[], int num) {
    for (int j = 0; j < num; j++) {
        for (int i = 1; i < num; i++) { // loop starts at 1 because 
            if (Data[i] < Data[i-1]) {  // we are checking values to the left 
                int a;
                a = Data[i];
                Data[i] = Data[i-1];
                Data[i-1] = a;
            }
        }
    }
}

int race() {
    int N; // Number of horses
    cin >> N;

    int S[N]; // Skill of each horse
    for (int i=0; i<N; i++) {
        cin >> S[i];
    }

    sort(S, N);

    /*
    //Test sort function
    for (int i=0; i<N; i++) {
        cout << S[i] << " ";
    } 
    */

    int minDiff;
    for (int i=1; i<N; i++) {
        if ((S[i] - S[i-1]) < minDiff)
            minDiff = (S[i] - S[i-1]); 
    }
    
    return minDiff;
}

int main()
{
    int cases;
    cin >> cases;
    
    int minDiff[cases];
    for (int i = 0; i < cases; i++) {
        minDiff[i] = race();
    }

    for (int i = 0; i < cases; i++) {
        cout << minDiff[i] << endl;
    }

    return 0;
}
