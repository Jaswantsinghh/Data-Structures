#include <stdio.h>
int sumOfElements(int* a,int size);

int main()
{
  int a[]={11,3,32,3,5};
  int size = sizeof(a)/sizeof(a[0]);
  int total=sumOfElements(a,size);
  printf("%d",total);
    return 0;
}
int sumOfElements(int* a,int size)
{
    int i,sum=0;
    
    for(i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
    
}
