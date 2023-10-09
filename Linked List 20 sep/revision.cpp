#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

int main(){

    int n;
    int arr[n];
    cout<<"enter the size of the array :";
    cin>>n;
    for(int i =0;i<n;i++)
    cin>>arr[i];

    Node *head=new Node();
    int i=0;
    while( i<n){
        head->data=arr[i];
        i++;
        cout<<head->data<<" ";
        head->next=new Node();//most important line;
        head=head->next;
    }

    return 0;
}
