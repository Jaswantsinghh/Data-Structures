#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
 if(b==0)
  return a;
 else
  return gcd(b,a%b);
}


void ArrayRotate (int A[], int n, int k)
{
  int d=-1,i,temp,j;
  for(i=0;i<gcd(n,k);i++)
  {
    j=i;
    temp=A[i];
    while(1)
    {
      d=(j+k)%n;
      if(d==i)
        break;
      A[j]=A[d];
      j=d;
     }
      A[j]=temp;
  }
}

int main()
{
 int arr[6]={1,2,3,4,5,6};
 ArrayRotate(arr, 6, 2);
 for(int i=0;i<6;i++)
 {
   cout << arr[i]<<" ";
 }
 cout <<"\n";
}
