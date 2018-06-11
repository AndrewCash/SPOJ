#include <iostream>
#include <string>
using namespace std;

int main(){
	
  int A;
  int B;
  
  cin >> A >> B;
  //cout << A <<" "<< B << endl;

  int correctAnswer;
  correctAnswer = A-B;

  cout << "This is the correct answer: " << correctAnswer << endl;

  string wrongAnswer = to_string(correctAnswer);

  wrongAnswer[1] = wrongAnswer[1] + 1;
  return 0;
}
