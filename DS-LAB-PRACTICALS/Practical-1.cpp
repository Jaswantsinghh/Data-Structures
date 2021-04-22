#include<bits/stdc++.h>
using namespace std;
int arr[100],n;
int create();
int display();
int insert();
int del();
int main()
{
    int num;
    while(true)
    {
    cout << "\n\t\t$$$ MENU $$$\n1 => Creating an Array of N Integer Elements\n2 => Display of Array Elements with Suitable Headings\n3 => Inserting an Element (ELEM) at a given valid Position (POS)\n4 => Deleting an Element at a given valid Position(POS)\n5 => Exit\n ";
    cout << "\n\n Enter a number from the menu.\n";
    cin >> num;
    switch(num)
    {
        case 1:
        cout << "Creating an array of n elements......\n";
        create();
        break;
        case 2:
        cout << "Displaying elements of array......\n";
        display();
        break;
        case 3:
        insert();
        break;
        case 4:
        del();
        break;
        case 5:
        cout << "\nExiting....!!!!\n";
        return 0;
        default:
        cout << "\nERROR..!!! Invalid option entered\n";
    }
    }
    return 0;
}

int create()
{  
    cout << "Enter the wanted size of array\n";
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    return 0;
}
int display()
{
    char c;
    for(int i=0;i<n;i++)
    {
        cout <<"Element "<<i+1<<" = "<<arr[i]<<"\n";
    }
    cout<<"\nPress any key to continue...!!!\n";
    cin >> c;
    return 0;
}
int insert()
{
  int num,index;
  cout<< "Enter the index where number is to be inserted\n";
  cin>>index;
  cout<<"Enter the number to be inserted\n";
  cin >> num;
  if(index>n+1)
  {
      cout<<"ERROR!!! index greater than size of array is not allowed.";
      return 0;
  }
  for(int i =n-1;i>=index-1;i--)
  {
      arr[i+1]=arr[i];
  }
  arr[index-1]=num;
  ++n;
  display();
  return 0;
}
int del()
{
    int index;
    cout << "Enter the index to be deleted\n";
    cin >> index;
    if(index>n+1)
    {
        cout << "ERROR!!! Enter a valid position.";
    }
    for(int i=index-1;i<n;++i)
    {
        arr[i]=arr[i+1];
    }
    --n;
    display();
    return 0;
}
