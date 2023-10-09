#include<iostream>
using namespace std;

class Stack{
    int top;
    int *arr;
    int size;

    public:
    Stack(int s){            // s= size.
        arr=new int[s];
        top=-1;
        size=s;
    }
    
    //push element in stack.
    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"stack overflow\n";
            return;
        }
        top++;
        arr[top]=data;
    }

    //Pop element from stack
    void pop(){
        if(top==-1){
            cout<<"stack underflow\n";
            return;
        }
        top--;
        return ;
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"stack underflow\n";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top==-1;
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