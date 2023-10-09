#include<iostream>
using namespace std;

int Double(int *arr,int size){
    if(!size){ //size==0
        return 0;
    }
    arr[0]*=2;//arr[0]=arr[0]*2;

    
    return Double(arr+1,size-1);
}

int main(){
    int arr[6]={2,4,21,8,9,12};
    
    Double(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0; 
}