#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};
int main(){
    node *first=new node();
    first->data=10;
    cout<<first->data;

    return 0;
}