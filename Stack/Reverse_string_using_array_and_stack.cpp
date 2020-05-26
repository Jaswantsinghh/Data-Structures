3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
	
#include<iostream>
#include<string.h>
#include<stack>			//Use Standard template library to create Stack data structure 
using namespace std;
 
void Reverse(char *p);
 
int main()
{
	char string[] = "Jaswant Singh";
	
	Reverse(string);
	
	printf(" %s",string);	
	
	return 0;
}
 
void Reverse(char *p)
{
	stack<char> S;
	
	/* Pushing to stack */
	for(int i=0; i<strlen(p); i++)		
				S.push(p[i]);
	
	/* Poping from stack */			
	for(int i=0; i<strlen(p); i++)
	{
		p[i] = S.top();
		S.pop();
	}
}
