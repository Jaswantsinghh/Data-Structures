#include <iostream>
using namespace std;

int main()
{
    //initialised an array of size 10
    int arr[10]={2,4,1,0,6,9,8,3,5,7};
    //initialisation of temp variable to store a variable temporarialy
    int temp;
    for(int i=0;i<10;++i)
    {
        for(int j=0;j<10;++j)
        {
            if(arr[i]<arr[j])
            {
                //interchanging value of arr[i] and arr[j
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for(int i=0;i<10;++i)
    {
        //displaying all the elements of array after sorting
        cout << arr[i];
    }
    return 0;
    
}
