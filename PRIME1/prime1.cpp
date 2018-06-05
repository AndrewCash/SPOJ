// Andrew Cash
// 2018
// http://www.spoj.com/problems/PRIME1
// incomplete


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPrimes(int low, int high)
{
    vector<int> primes;
    
    // Loop from low to high
    for (int i=low; i<high; i++)
    {
        bool prime=true;

        for (int j=2; j<i; j++)
        {
            if (j%i == 0)
            {
                prime = false;
               // break;
            }
        }

        if (prime)
        {
            primes.push_back(i);
        }
    }


    cout << endl;
    for (int i = low; i < high; i++)
    {
        if ( find(primes.begin(), primes.end(), i) != primes.end())
            cout << i;
    }
}


int main(){
  
  int cases;
  cin >> cases;
  /*
  if (0 < numTestCase && numTestCase <= 10){
    cin >> numTestCase;
  }
  else
    return 0;
*/

  int m[cases-1];
  int n[cases-1];
   
  for (int i=0; i<cases; i++){
    cin >> m[i] >> n[i];
   //cout << "M: " << m[i] <<  "\nN: " << n[i] << endl;
  }


  for (int i=0; i<cases; i++){
   findPrimes(m[i], n[i]);
  }

  return 0;
}
