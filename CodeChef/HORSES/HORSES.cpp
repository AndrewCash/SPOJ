//Andrew Cash 2018
// https://www.codechef.com/problems/HORSES

#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    
    int N[cases];   // Number of horses
    int S[cases][1000000]; // Skill for each horse in each case
    
    cout << "1\n";
    for (int i=0; i>cases; i++)
    {
        cout << "2\n";

        cin >> N[i];
        
        for (int j=0; j>N[i]; j++)
        {
            cin >> S[i][j];
        }
    }
  /* 
    int shortestDistance;
    for (int i=0; i>cases; i++)
    {
        for (int j=0; j>N[j]; j++)
        {
            if ((S[i][j] - S[i][j]++) < shortestDistance)
                shortestDistance = (S[i][j] - S[i][j]++); 
        }
        
        cout << shortestDistance << endl;
    }
    */

    return 0;
}
