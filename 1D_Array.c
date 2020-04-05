#include <stdio.h>
int add(int arr[], int position, int value);
int main()
{
    int arr[5] = {2,3,1,6,0}; /*intialising an array*/
    /*Call any function here */
    return 0;
}


int add(int arr[],int position,int value) /*Function to add a new value at a position in an existing array*/
{
  int new_array[6],i,j,k;
   for(i=0;i<position;i++)
   {
       new_array[i]=arr[i];
   }
   new_array[position]=value;
   for(j=position+1;j<7;j++)
   {
       new_array[j]=arr[j-1];
   }
   for(k=0;k<6;k++)
   {
       printf("%d\n",new_array[k]);
   }
  return new_array;
}


