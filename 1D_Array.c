#include <stdio.h>
int add(int arr[], int position, int value);
int search(int *arr,int key);
int deleteElement(int arr[], int n, int x);
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


int search(int *arri,int key) /*Function to search an element in an array*/
{ 
int i;
    for(i=0; i<5; i++)
    {
        if(a[i]==key)
        {
             return 1;		 
        }
 
    }
    
return 0;
}


int deleteElement(int arr[], int n, int x) /*Function to delete an element from an array*/
{ 
   // Search x in array 
   int i; 
   for (i=0; i<n; i++) 
      if (arr[i] == x) 
         break; 
  
   // If x found in array 
   if (i < n) 
   { 
     // reduce size of array and move all 
     // elements on space ahead 
     n = n - 1; 
     for (int j=i; j<n; j++) 
        arr[j] = arr[j+1]; 
   } 
  
   return n; 
} 

