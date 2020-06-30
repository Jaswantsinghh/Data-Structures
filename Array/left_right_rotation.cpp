#include<bits/stdc++.h>
using namespace std;



int main()
{
  int temp, arr[4]={1,2,3,4};
  temp = arr[0];
  cout << "Before left rotation\n";
  for(int i=0;i<4;i++)
  {
    cout << arr[i] << " ";
  }
  cout <<"\n";
  for(int i=1;i<4;i++)
  {
    arr[i-1]=arr[i];
  }
  arr[3]=temp;
  cout <<"After left rotation\n";
  for(int i=0;i<4;i++)
  {
    cout << arr[i] << " ";
  }
  cout <<"\n";
  temp = arr[3];
  for(int i=3;i>=1;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[0]=temp;
  cout <<"After right rotation\n";
  for(int i=0;i<4;i++)
  {
    cout << arr[i] << " ";
  }
  cout <<"\n";
  return 0;
}
