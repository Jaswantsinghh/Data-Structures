#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};

Node* head;

void Delete(int n)
{
 Node* temp1= head ;
 if(n==1)
 {
     head=temp1->next;
     free(temp1);
     return;
 }
 for(int i=0;i<n-2;i++)
 {
     temp1=temp1->next;
 }
 Node* temp2 =temp1-> next;
 temp1->next=temp2->next;
 free(temp2);
}


void Append(int data)
{
    Node* temp = new Node();

    Node *last = head;

    /* 2. put in the data */
    temp->data = data;

    /* 3. This new node is going to be
    the last node, so make next of
    it as NULL*/
    temp->next = NULL;

    /* 4. If the Linked List is empty,
    then make the new node as head */
    if (head == NULL)
    {
        head = temp;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = temp;
    return;
}

void Print()
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    head = NULL;
    Append(2);
    Append(4);
    Append(6);
    Append(5);
    Print();
    int n;
    cout << "Enter the position\n";
    cin >> n;
    Delete(n);
    Print();
    return 0;
}
