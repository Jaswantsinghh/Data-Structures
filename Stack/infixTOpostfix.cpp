#include<bits/stdc++.h>
using namespace std;
int convert(string);
int precedence(char);
int main()
{
    string s;
    cout << "Enter the infix statement\n";
    cin >> s;
    convert(s);
    int c=1;
    while(c==1)
    {
       cout << "To convert one more infix expression to postfix, press 1 else press 0 to exit and hit enter\n ";
       cin >> c;
       if(c==0)
       {
           return 0;
       }
       cout << "Enter the infix statement\n";
       cin >> s;
       convert(s);
    }
    return 0;
}
int convert(string s)
{
    stack<char> stck;
    string dup;
    int len;
    //stck.push('e');
    len=s.length();
    for(int i=0;i<len;++i)
    {
        if((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z'))
        {
            dup=dup+s[i];
        }
        else if(s[i]=='(')
        {
            stck.push('(');
        }
        else if(s[i]==')')
        {
            while(stck.top()!='('&& stck.empty() == false)
            {
                char ch = stck.top();
                stck.pop();
               dup =dup + ch;
            }
            if(stck.top() == '(')
            {
                char ch = stck.top();
                stck.pop();
            }
        }
        else
        {
            while(stck.empty() == false && precedence(s[i]) <= precedence(stck.top()))
            {
                char ch = stck.top();
                stck.pop();
                dup = dup + ch;
            }
            stck.push(s[i]);
        }
    }
    while(stck.empty() == false)
    {
        char ch = stck.top();
        stck.pop();
        dup = dup + ch;
    }
    cout << "POSTIX EXPRESSION IS: ";
    cout << dup <<"\n";
    return 0;
}

int precedence(char ch)
{
    if(ch == '^')
    return 3;
    else if(ch == '*' || ch == '/')
    return 2;
    else if(ch == '+' || ch == '-')
    return 1;
    else
    return -1;
}
