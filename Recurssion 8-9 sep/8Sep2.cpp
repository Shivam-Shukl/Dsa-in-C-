#include<iostream>
using namespace std;

int Print_sum(int *arr,int sum,int size){  //*arr is first elemnt of array.
    if(!size){ //size==0
        return 0;
    }
    sum+=arr[0];
    cout<<sum<<" ";
    return Print_sum(arr+1,sum,size-1);
}

int main(){
    int arr[6]={2,4,21,8,9,12};
    int sum=0;
    Print_sum(arr,sum,6);

    return 0; 
}