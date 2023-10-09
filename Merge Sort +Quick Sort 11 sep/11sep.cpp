#include<iostream>
using namespace std;

int n=0,t=0;

int Fun(int *arr,int size,int target){
    if(!size){
        return 0;
    }
    if(t==target){
        return 1;
    }
    t+=arr[0];
    Fun(arr+1,size-1,target);
     
    }
    

}

int main(){
    int arr[3]={4,5,3};
    int n;
    cin>>n;
    cout<<Fun(arr,3,n);
    return 0;
}