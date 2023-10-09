#include<iostream>
using namespace std;

void sum_possible(int *arr,int size,int index,int sum){
    if(index>=size){
        cout<<sum<<" ";
        return;
    }  

    sum_possible(arr,size,index+1,sum);
    sum_possible(arr,size,index+1,sum+arr[index]);
}

int main(){

    int arr[5]={2,4,1,5,8};
    int index=0,sum=0;
    sum_possible(arr,5,0,0);

    return 0;
}