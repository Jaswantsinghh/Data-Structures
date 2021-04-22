//SELECTION SORT
#include <iostream>
using namespace std;
int selection(int arr[],int);
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
int main()
{
    int arr[10]={2,4,1,0,6,9,8,3,5,7};
    selection(arr,10);
    for(int i=0;i<10;++i)
    {
        cout << arr[i];
    }
    return 0;
    
}

int selection(int arr[],int n)
{
    int temp=0,i,j;
    int min_index=0;
    if(min_index<n-1)
    {
        for (i = 0; i < n-1; i++) 
    { 
        min_index = i; 
        for (j = i+1; j < n; j++) 
        {
        if (arr[j] < arr[min_index]) 
            min_index = j; 
        }   
        swap(&arr[min_index], &arr[i]); 
    } 
    }
    return arr[n];
}
