//Andrew Cash 2018
//https://www.codechef.com/problems/CIELAB#

/*
Input
An input contains 2 integers A and B.

Output
Print a wrong answer of A-B. Your answer must be a positive integer containing the same number of digits as the correct answer, and exactly one digit must differ from the correct answer. Leading zeros are not allowed. If there are multiple answers satisfying the above conditions, anyone will do.

Constraints
1 ≤ B < A ≤ 10000

Sample Input
5858 1234
Sample Output
1624
Output details
The correct answer of 5858-1234 is 4624. So, for instance, 2624, 4324, 4623, 4604 and 4629 will be accepted, but 0624, 624, 5858, 4624 and 04624 will be rejected.
*/

#include <iostream>
//#include <string>
using namespace std;

int main(){
	
  int A;
  int B;
  
  cin >> A >> B;
  //cout << A <<" "<< B << endl;

  int correctAnswer;
  correctAnswer = A-B;

  //cout << "This is the correct answer: " << correctAnswer << endl;

  int i = correctAnswer % 10;
  
  if (i<9)
    correctAnswer++;
  else
    correctAnswer--;

  cout << correctAnswer << endl;

  return 0;
}
