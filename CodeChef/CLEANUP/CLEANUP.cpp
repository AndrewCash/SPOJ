// Andrew Cash
// https://www.codechef.com/problems/CLEANUP

#include <iostream>
#include <vector>
using namespace std;

void remainingJobs()
{
    int m, n;
    cin >> n >> m;

    bool completed[n];

    for (int i=0; i < m; i++)
    {
        int j;
        cin >> j;
        completed[j] = true;
    }

    vector<int> remainingJobs;

    for (int i=0; i<n; i++)
    {
        if (completed[i] == true)
        {
           remainingJobs.push_back (i); 
        }
    }
}

int main()
{
    int testcase;
    cin >> testcase;

    for (int i=0; i<testcase; i++)
    {
        remainingJobs(); 
    }
    return 0;
}
