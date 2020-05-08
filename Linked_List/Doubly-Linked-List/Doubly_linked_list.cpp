#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
Node* head;
struct Node* GetNewNode(int x)
{
    Node* temp= new Node();
    temp->data=x;
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
};

void InsertAtHead(int x)
{
    Node* newNode= GetNewNode(x);
    if(head==NULL) {
        head=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}

void Print()
{
    Node* temp=head;
    cout << "Forward";
    while(temp!=NULL)
    {
        cout << temp->data <<"\t";
        temp=temp->next;
    }
    cout << "\n";
}
void ReversePrint()
{
    Node* temp=head;
    if(temp==NULL) return;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    cout << "Reverse:";
    while(temp!=NULL)
    {
        cout << temp->data;
        temp=temp->prev;
    }
    cout << ("\n");
}

int main()
{
    head=NULL;
    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(6); Print(); ReversePrint();
    InsertAtHead(8); Print(); ReversePrint();
    cout << "Hello world!" << endl;

    return 0;
}
