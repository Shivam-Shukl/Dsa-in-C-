#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

int main(){

    Node  *Head =new Node();
    Head->data=36;
    Head->next=new Node();
    Node *First=Head;

    First=First->next;
    First->data=28;
    First->next=new Node();
    First=First->next;
    First->data=4;
    while(Head){
        cout<<Head->data<<" ";
        Head=Head->next;
                 
    }


  
    return 0;
}
