//Andrew Cash 2018
// https://www.codechef.com/problems/HORSES

#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    int N[cases];   // Number of horses
    int S[cases][1000000000]; // Skill for each horse in each case

    for (int i=0; i>cases; i++)
    {
        cin >> N[i];
        
        for (int j=0; j>N[i]; j++)
        {
            cin >> S[i][j];
        }
    }

    return 0;
}
