// Evaluation of Suffix expression with single digit operands and operators: +, -, *, /, %, ^ 
// STL library
#include<bits/stdc++.h>
using namespace std;

//function to compute calculation between operands and operator
float compute(char symbol, float op1, float op2)

{

 switch (symbol)

 {

  case '+': return op1 + op2;

  case '-': return op1 - op2;

  case '*': return op1 * op2;

  case '/': return op1 / op2;

  case '$':

  case '^': return pow(op1,op2);

  default : return 0;

 }

}

//Driver function
int main()

{

float s[20], res, op1, op2;

int top, i;
// initialised a char array to make stack
char postfix[20], symbol;

cout << "\nEnter the postfix expression:\n";
// input postfix expression
cin >> postfix;
// top of stack is initialised to -1 which means stack is empty
top=-1;
// traversing and checking comdition for calculations
for (i=0; i<strlen(postfix) ;i++)

{

symbol = postfix[i];

if(isdigit(symbol))

 s[++top]=symbol - '0';

else

 {

 op2 = s[top--];

 op1 = s[top--];
// calling compute function and storing return value in res variable
 res = compute(symbol, op1, op2);

 s[++top] = res;

 }

}

res = s[top--];
// output of answer
cout << "\nThe result is : "<<res<<endl;

} 
