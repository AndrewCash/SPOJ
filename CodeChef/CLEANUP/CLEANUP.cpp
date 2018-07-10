// Andrew Cash
// https://www.codechef.com/problems/CLEANUP

#include <iostream>
#include <vector>
using namespace std;

const bool VERBOSE = true;

void remainingJobs()
{
    int m, n;
    cin >> n >> m;

    vector<bool> completed;

    if (VERBOSE)
    {
        cout << "Completed bool array:\n";

        for (int i=0; i<n; i++)
        {
            if (completed[i] == true)
                cout << "TRUE\n";
            else
               cout << "FALSE\n";
        }
    }

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

    // Output chef's jobs. (odd indicess)
    for (int i=0; i<m; i+=2)
    {
        cout << remainingJobs[i] << " ";
    }

    cout << endl;

    // Output assistant's jobs. (even indices)
    for (int i=0; i<m; i+=2)
    {
        cout << remainingJobs[i];
    }

    cout << endl;
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
