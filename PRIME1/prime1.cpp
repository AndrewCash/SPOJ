// Andrew Cash
// 2018
// http://www.spoj.com/problems/PRIME1


#include <iostream>
using namespace std;

void findPrimes(int m, int n){
    int i = m;
    int primes[n-m];
    int numFoundPrimes;

    while (i < n){
        // check if number is prime
        if (i%2 != 0 || i%3 != 0 || i%5 != 0){
            //add number to prime numbers array
            primes[numFoundPrimes] = i;
            numFoundPrimes++;
        }

        i++;
    }

    //cout << prime numberz
    for (int j=0; j<numFoundPrimes; j++)
    {
        cout << primes[j] << endl;
    }
}


int main(){
  
  int numTestCase;
  cin >> numTestCase;
  /*
  if (0 < numTestCase && numTestCase <= 10){
    cin >> numTestCase;
  }
  else
    return 0;
*/

  int m[numTestCase-1];
  int n[numTestCase-1];
   
  for (int i=0; i<numTestCase; i++){
    cin >> m[i] >> n[i];
   //cout << "M: " << m[i] <<  "\nN: " << n[i] << endl;
  }


  for (int i=0; i<numTestCase; i++){
   findPrimes(m[i], n[i]);
  }

  return 0;
}
