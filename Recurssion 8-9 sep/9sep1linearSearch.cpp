#include<iostream>
using namespace std;

int Search(int *arr,int sum,int size){
    if(!size){ //size==0
        return 0;
    }
    if(arr[0]==sum)
    cout<<"found";
    
    return Search(arr+1,sum,size-1);
}

int main(){
    int arr[6]={2,4,21,8,9,12};
    int key;
    cin>>key;
    Search(arr,key,6);

    return 0; 
}