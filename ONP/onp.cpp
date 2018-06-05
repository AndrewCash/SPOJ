// Andrew Cash 2018
// http://www.spoj.com/problems/ONP/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    string expression[cases];

    for (int i=0; i<cases; i++)
    {
        cin >> expression[i];
    }
    
    for (int i=0; i<cases; i++)
    {
        parse(i);
    }

    return 0;
}
