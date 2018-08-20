// https://www.spoj.com/problems/STRHH/
#include <iostream>
#include <string>
using namespace std;

void halfofhalf(string original, string changed, int length)
{
    //int length = original.length;

    for (int i = 0; i < length; i += 2)
    {
        changed.push_back(original[i]);
    }
}

int main() {
    int test = 0;
    cin >> test;

    string word[test];
    string newWord[test];

    // Input words
    for (int i = 0; i < test; i++) { cin >> word[i]; }


    // Output original words
    cout << endl;
    for (int i = 0; i < test; i++) { cout << word[i] << endl; }

    // Half of Half

    for (int i=0; i<test; i++) {
        int lengthOfHalf = word[i].length;
        halfofhalf(word[i], newWord[i], lengthOfHalf);
    }


    return 0;
}
