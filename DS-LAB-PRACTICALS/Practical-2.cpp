#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int stck[MAX], n=100, top=-1;
int push();
int pop();
int palindrome();
int overunder();
int display();
int main()
{
  while(1)
  {
    int n;
    cout << "\n\n####### MENU #######\n";
    cout << "1 => Push an Element on to Stack.\n2 => Pop an Element from Stack.\n3 => Demonstrate how Stack can be used to check Palindrome.\n4 => Demonstrate Overflow and Underflow situations on Stack Display the status of Stack\n5 => Exit \n\n";
    cout << "\nEnter a number from the menu\n";
    cin >> n;
    switch(n)
    {
        case 1:
        push();
        break;
        
        case 2:
        pop();
        break;
        
        case 3:
        palindrome();
        break;
        
        case 4:
        overunder();
        break;
        
        case 5:
        return 0;
        
        default:
        cout << "ERROR...!!! Enter a valid value\n";
    }
  }
  return 0;
}

int push()
{
  int num;
  cout << "\nEnter the number to be pushed\n";
  cin >> num;
  if(top>=n-1) cout<<"Stack Overflow\n"<<endl;
  else
  {
    top++;
    stck[top]=num;
  }
  display();
  return 0;
}

int pop()
{
  cout << "Popping element from stack....!!!\n";
  if(top==-1)
  {
    cout <<"ERROR Stack Underflow\n";
  }
  else
  {
    cout<<"The popped element is "<< stck[top] <<endl;--top;
  }
  display();
  return 0;
}
int palindrome()
{
  if(top==-1)
{
    cout<<"Enter some elements\n";
    return 0;
  }
  int arr[MAX];
  for(int i=0;i<MAX;++i)
 {
    arr[i]=stck[i];
  }
  int t = top;
  int c=0,d=0;
  for(int i=0;i<t;++i)
  {
    if(arr[t-i-1]==stck[i])
    {
      ++c;
    }
    ++d;
  }
  if(c==d)
  {
    cout << "WOW...!!! PALINDROME\n";
  }
  else
  {
    cout << "OOPS...!!! NOT A PALINDROME\n";
  }
  display();
  return 0;
}

int overunder()
{
  if(top==-1)
  {
    cout<<"Stack Underflow\n";
  }
  else if(top>n-1)
  {
    cout << "Stack Overflow\n";
  }
  else
  {
    cout << "Space is available in stack\n";
  }
  display();
  return 0;
}
int display()
{
  int t=top;
  cout << "The elements in stack are:\n";
  while(t>=0)
  {
    cout << stck[t]<<"\n";
    --t;
    if(t==-1)
    {
      break;
    }
  }
  char c;
  cout<<"Press a key and hit enter to continue\n";
  cin >> c;
  return 0;
}
