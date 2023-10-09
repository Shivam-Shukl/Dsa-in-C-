#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

int main(){
    Node  *Head =new Node();
    Head->data=30;
    Head->next=new Node();
    Node *First=Head;
    Node* x=First;
    First=First->next;
    First->data=31;
    First->next=new Node();
    First=First->next;
    First->data=33;
    cout<<endl;
    while(x){
        cout<<x->data<<" ";
        x=x->next;
                 
    }

    //insetion in the begining.

    // Node *temp=new Node();
    // temp->data=8;
    // temp->next=Head;
    
    // cout<<endl<<"linked list after insetion :"<<endl;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
                 
    // }

    // insetion in  the end ;
    // Node *temp = Head;
    // Node *temp1 = Head;
    // while (temp->next) {
    //     temp = temp->next;
    // }
    // temp->next = new Node();
    // temp = temp->next;
    // temp->data = 40;

    // cout << endl << "linked list after insertion" << endl;
    // while (temp1) {
    //     cout << temp1->data << " ";
    //     temp1 = temp1->next;
    // }
    
    //Insertion in the middle
    Node *temp=Head;
    Node *temp1 = Head;
    while(temp->data!=31){
        temp=temp->next;
    }
    Node *first=new Node();
    first->data=32;
    first->next=temp->next;
    temp->next=first;

    cout << endl << "linked list after insertion" << endl; 
    while (temp1) {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }


    return 0;
}
