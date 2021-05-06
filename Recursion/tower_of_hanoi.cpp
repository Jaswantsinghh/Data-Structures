//Written by Jaswant Singh
#include <bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char from,char aux,char to)
{
    if(n==1)
    {
        cout << "Move disk 1 from "<<from<<" to "<<to<<"\n";
        return;
    }
    else
    {
        towerofhanoi(n-1,from,to,aux);
        cout << "Move disk "<<n<<" from "<<from<<" to "<<to<<"\n";
        towerofhanoi(n-1,aux,from,to);
    }
}

int main()
{
    int n;
    char from ,aux ,to;
    cin >> n;
    from = 'A';
    aux = 'B';
    to = 'C';
    towerofhanoi(n,from,aux,to);
    return 0;
}
