// Evaluation of Suffix expression with single digit operands and operators: +, -, *, /, %, ^ 
// STL library
#include<bits/stdc++.h>
using namespace std;
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

int main()

{

float s[20], res, op1, op2;

int top, i;

char postfix[20], symbol;

cout << "\nEnter the postfix expression:\n";

cin >> postfix;

top=-1;

for (i=0; i<strlen(postfix) ;i++)

{

symbol = postfix[i];

if(isdigit(symbol))

 s[++top]=symbol - '0';

else

 {

 op2 = s[top--];

 op1 = s[top--];

 res = compute(symbol, op1, op2);

 s[++top] = res;

 }

}

res = s[top--];

cout << "\nThe result is : "<<res<<endl;

} 
