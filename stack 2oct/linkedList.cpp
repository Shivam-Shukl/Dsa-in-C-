#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node (int data){
        this->data=data;
        next=NULL;
    }
};

class Stack{
    
    Node *top;
    
    public:
    Stack(){            
        top=NULL;
    }
    
    //push element in stack.
    void push(int data)
    {
        Node *temp=new Node(data);
        if(!temp){
            cout<<"Stack Overflow\n";
            return ;
        }
        temp->next=top;
        top=temp;
    }

    //Pop element from stack
    void pop(){
        if(!top){
            cout<<"stack underflow\n";
            return;
        }
        Node *temp = top;
        top= top->next;
        delete temp;
    }

    int peek()
    {
        if(!top)
        {
            cout<<"stack is empty\n ";
            
        }
        return top->data;

    }

    bool empty()
    {
        return top==NULL;  // It is checking condition here
        
    }
};

int main(){

    Stack s(4);  // making a object of the class Stack of name s and passing size of the stack ie. 4
    s.push(4);   // Now pushing 4 in the array of stacck by using push mehtod
    s.push(4321);
    s.push(3);
    s.push(32);

    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;

    return 0;
}