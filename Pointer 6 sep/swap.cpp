#include<iostream>
using namespace std;

void swap(int &c,int &d){
    int temp=c;
    c=d;
    d=temp;
}

void reverse(int *arr ,int size){
    int start=0,end=size-1;
    while(start<end)
    {
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++,end--;
    }
}

int main(){
    int a=5,b=8;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    int A[5]={10,20,30,40,50};
    reverse(A,5);
    for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}