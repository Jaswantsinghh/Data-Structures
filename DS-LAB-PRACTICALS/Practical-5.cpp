#include<bits/stdc++.h>
#define MAX 100
using namespace std;

void insert();
void pop();
void status();
void display();

char arr[MAX];
int top=0;
int indx=-1;
int main()
{
    cout << "Select an option for an operation from the menu.\n\n ";
    cout << "~~~~~~~~~~   MENU   ~~~~~~~~~~\n";
    cout << "1 => Insert an Element on to Circular QUEUE \n";
    cout << "2 => Delete an Element from Circular QUEUE \n";
    cout << "3 => Demonstrate Overflow and Underflow situations on Circular QUEUE \n";
    cout << "4 => Display the status of Circular QUEUE \n";
    cout << "5 => Exit\n\n";
    cout << "Enter your choice\n";
    
    while(1)
    {
        cout << "Select an option for an operation from the menu.\n\n ";
        cout << "~~~~~~~~~~   MENU   ~~~~~~~~~~\n";
        cout << "1 => Insert an Element on to Circular QUEUE \n";
        cout << "2 => Delete an Element from Circular QUEUE \n";
        cout << "3 => Demonstrate Overflow and Underflow situations on Circular QUEUE \n";
        cout << "4 => Display the status of Circular QUEUE \n";
        cout << "5 => Exit\n\n";
        cout << "Enter your choice\n";
        int n;
        cin >> n;
        switch(n)
        {
        case 1:
        insert();
        break;
        
        case 2:
        pop();
        break;
        
        case 3:
        status();
        break;
        
        case 4:
        display();
        break;
        
        case 5:
        return 0;
        
        default:
        cout << "Please Enter a valid option\n";
        }
    }
    
    return 0;
}
void insert()
{
    cout << "Enter the character to be inserted\n";
    char c;
    cin >> c;
    if(indx==-1)
    {
        arr[indx+1] = c;
        indx++;
    }
    else
    {
        arr[indx+1]=c;
        indx++;
    }
    display();
}


void pop()
{
    if(indx==-1)
    {
        cout << "Queue is already Empty!!!\n";
    }
    else
    {
        if(indx==0)
        {
            top=-1;
            indx=-1;
        }
        else
        {
        for(int i=0;i<indx;++i)
        {
           arr[i]=arr[i+1]; 
        }
        indx--;
        }
    }    
    display();
}

void status()
{
    if(indx==MAX)
    {
        cout <<"QUEUE OVERFLOW !!!\n";
        
    }
    else if(top==-1)
    {
        cout <<"QUEUE UNDERFLOW !!!\n";
    }
}

void display()
{
    cout << "elements in the queue are:\n";
    for(int i=0;i<=indx;++i)
    {
        cout << arr[i] <<"\t";
    }
    cout << "\n";
    char c;
    
    cout << "Press any key and hit enter to proceed\n";
    cin >> c;
}

