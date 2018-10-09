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
    vector<bool> primes;
    bool isPrime;

    // Loop from low to high
    for (int i=low; i<high; i++)
    {

        for (int j=2; j<i; j++)
        {
            if (j%i == 0) {    // There exists a number that divides i
                isPrime = false; // Thus set prime to false at i
            } else {
                isPrime = true;
            }
        }

        primes.push_back(isPrime);
    }


    cout << endl;
    for (int i = low; i < high; i++)
    {
        for (int j=0; j < primes.size(); j++)
        {
            if (primes[i] == true)
                cout << i << endl;
        }
    }
}


int main(){

  int cases;
  cin >> cases;

  int m[cases];
  int n[cases];

  for (int i=0; i<cases; i++){
    cin >> m[i] >> n[i];
    //cout << "M: " << m[i] <<  "\nN: " << n[i] << endl;
  }


  for (int i=0; i<cases; i++){
   findPrimes(m[i], n[i]);
  }

  return 0;
}
