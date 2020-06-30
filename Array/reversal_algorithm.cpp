#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int d, int n)
{
  while(d<n)
  {
   int temp=arr[d];
   arr[d]=arr[n];
   arr[n]=temp;
   d++;
   n--;
  }
}

void leftrotate(int ar[], int d, int n)
{
  reverse(ar, 0, d-1);
  reverse(ar, d,n-1);
  reverse(ar,0, n-1);
}

void rightrotate(int ar[], int d, int n)
{
  reverse(ar, 0 ,n-d-1 );
  reverse(ar,n-d, n-1);
  reverse(ar,0,n-1);
 
}

int main()
{
  int arr[8]={1,2,3,4,5,6,7,8};
  leftrotate(arr, 2, 8);
  for(int i=0;i<8;i++)
  {
    cout << arr[i] <<" ";
  }
  cout << "\n";
  rightrotate(arr, 2, 8);
  for(int i=0;i<8;i++)
  {
    cout << arr[i] <<" ";
  }
  cout << "\n";
  return 0;
}
