#include<iostream>
using namespace std;

class Node {
    public:
	int data;
	struct Node* next;
	
	
};
int sumOfLastN_Nodes( Node* head, int n)
{
      // Code here
      int count=1;
      int x;
      int sum=0;
      Node *first=head;
      while(first->next){
          count++;
          first=first->next;
          
      }
      Node*first1=head;
      x=count-n;
      count =0;
      while(first1->next){
          if(count==x){
              sum+=first1->data;
          }
          count++;
          first1=first1->next;
      }
      return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node *head =new Node;
    head->data=arr[0];
    Node *temp=head;
    for(int i=1;i<n;i++){
        temp->next=new Node;
        temp=temp->next;
        temp->data=arr[i];
    }
    cout<<sumOfLastN_Nodes( head, 3);



    return 0;
}