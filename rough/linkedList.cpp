#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = nullptr; // Initialize next to nullptr
    }
};

int Reverse(Node *head){
    if(head==NULL)
    return 0;
    
    Reverse(head->next);
    cout<<head->data<<" ";
    
}

int main()
{
    Node *First = new Node(30);

    Node *temp = First;

    temp->next = new Node(31);
    temp = temp->next;

    for (int i = 2; i < 5; i++)
    {
        int d;
        cin >> d;
        temp->next = new Node(d);
        temp = temp->next;
    }

    // Insert node with value 8 at the beginning
    Node *insert1 = new Node(8);
    insert1->next = First;
    First = insert1;

    // Traverse to the end of the list and insert node with value 40
    temp = First;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new Node(40);
    
    temp =First;
    
    while(temp->next->data!=35){
        temp=temp->next;
    }
    Node * Enter=new Node(33);
    Enter->next=temp->next;
    temp->next=Enter;

    // Print the list
    
    
    Reverse(First);
    
    Node *Temp;

    Node * prev=NULL;
    while(First){
        Temp=First->next;
        First->next=prev;
        prev=First;
        First=Temp;
    }

    
    cout<<endl;

    temp =prev;
    while(temp->next->data!=33){
        temp=temp->next;
    }
    temp->next=temp->next->next;


    Node *head = prev;
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }                 
    

    

    return 0;
}
