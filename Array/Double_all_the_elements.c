
#include <stdio.h>
void Double(int* a,int size);

int main()
{
    int i;
  int a[]={11,3,32,3,5};
  int size = sizeof(a)/sizeof(a[0]);
  Double(a,size);
  for(i=0;i<size;i++)
  {
    printf("%d\n",a[i]);  
  }
  
    return 0;
}
void Double(int* a,int size)
{
    int i;
    
    for(i=0;i<size;i++)
    {
        a[i]=2*a[i];
    }
    
    
}
