#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};

struct Node* head;

void Insert(int x)
 {
   Node* temp1 = new Node();
    temp1->data=x;
    temp1->next=head;
    head=temp1;
}
void Print()
{
    Node* temp = head;
    cout << "The list is:";
    while(temp != NULL)
    {
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    head = NULL;
    cout << "How Many numbers??" << endl;
    int n,x;
    cin >> n;
    for(int i=0; i<n;i++)
    {
        cout << "Enter the number" << endl;
        cin >> x;
        Insert(x);
        Print();
    }
    return 0;
}
