// Andrew Cash
// 2018
// http://www.spoj.com/problems/PRIME1


#include <iostream>
#include <math.h>
using namespace std;

void findPrimes(int low, int high)
{
    bool primes[high] { 0 };
    //int numFoundPrimes;

    for (int i=low; i<=sqrt(high); i++)
    {
        if ((i%2 != 0) || (i%3 != 0) || (i%5 != 0) || (i%7 != 0))
        {
            // found prime number
            primes[i] = true;
           // numFoundPrimes++;
        }
    }

    //cout << prime numberz
    /*
    for (int j=0; j<numFoundPrimes; j++)
    {
        cout << primes[j] << endl;
    }
    */

    //cout << primes[0] << endl;

    for (int i = low; i < high; i++)
    {
        if (primes[i]==(true))
        {
            cout << i << endl;
        }
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
