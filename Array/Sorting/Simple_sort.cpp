#include <iostream>
using namespace std;

int main()
{
    int arr[10]={2,4,1,0,6,9,8,3,5,7};
    int temp;
    for(int i=0;i<10;++i)
    {
        for(int j=0;j<10;++j)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for(int i=0;i<10;++i)
    {
        cout << arr[i];
    }
    return 0;
    
}
