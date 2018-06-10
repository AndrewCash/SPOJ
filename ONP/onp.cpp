// Andrew Cash 2018
// http://www.spoj.com/problems/ONP/

/*

Input:
t [the number of expressions <= 100]
expression [length <= 400]
[other expressions]
Text grouped in [ ] does not appear in the input file.

Output:
The expressions in RPN form, one per line.

Input:
3
(a+(b*c))
((a+b)*(z+x))
((a+t)*((b+(a+c))^(c+d)))

Output:
abc*+
ab+zx+*
at+bac++cd+^*

*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

string parse(string expression)
{
   //cout << "In Parse" << endl;

   stack<char> operators;
   string parsedString;



   for (unsigned int i=0; i<expression.length() ; i++)
   {  
       // if i is letter then push it to parsedString
       if ('a' <= expression[i] && expression[i] <= 'z')
       {
           parsedString += expression[i];
       }
    
       // if [i] is exponent
       else if (expression[i] == '^')
       {
           operators.push(expression[i]);
       }
       
       // if [i] is mul / div
       else if (expression[i] == '*' || expression[i] == '/')
       {
           if (!operators.empty())
           {
                if (operators.top() == '^')
                {
                    parsedString += operators.top();
                    operators.pop();
                }
           }

           operators.push(expression[i]);
       }

       // if [i] is add / sub
       else if (expression[i] == '+' || expression[i] == '-')
       {  
          if (!operators.empty())
          {
              if (operators.top() == '^' || operators.top() == '*' || operators.top() == '/')
              {
                 parsedString += operators.top();
                 operators.pop();
              }   
          }

           operators.push(expression[i]);
       }
       
       // if [i] is open parenth
       else if (expression[i] == '(')
       {
           operators.push(expression[i]);
       }


       // if [i] is close parenth
       else if (expression[i] == ')')
       {
           while (operators.top() != '(')
           {
                //Pop off operator stack and push to output string
                parsedString += operators.top();
                operators.pop();
           }
           
           operators.pop();
       }

       else
       {
           continue;
       }
   }

   while (!operators.empty())
   {
       parsedString += operators.top();
       operators.pop();
   }
   
   return parsedString;
}


int main()
{
    int cases;
    cin >> cases;

    string expression[cases];
    string parsedExpressions[cases];

    for (int i=0; i<cases; i++)
    {
        cin >> expression[i];
    }
    
    for (int i=0; i<cases; i++)
    {
        parsedExpressions[i] = parse(expression[i]);
        cout << parsedExpressions[i] << endl;
    }

    return 0;
}
