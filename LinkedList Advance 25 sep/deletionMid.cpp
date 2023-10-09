#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *prev;
    Node *next;
    Node (int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};

Node* deleteNode(Node *head_ref, int x)
{
      //Your code here
    int count=1;
    Node *first=head_ref;
    while(count!=x)
    {
        first=first->next;
        count++;
    }
    first->prev->next=first->next;
    first->next->prev=first->prev;
    return head_ref;
}

int main(){
    int arr[5]={1,2,3,4,5};
    Node *head;
    head=new Node(arr[0]);
    Node *first=head;
    for(int i=1;i<5;i++){
        first->next=new Node(arr[i]);
        first->next->prev=first;
        first=first->next;
    }
    first=head;
    deleteNode(head,4);
    while(first){
        cout<<first->data<<" ";
        first=first->next;
    }

    



    return 0;
}