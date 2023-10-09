#include<iostream>
using namespace std;

int sum=0;
int Binary_search(int start,int end,int target,int arr[]){
    if(end<start){
        return 0;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
        
        return 1;
    }
    else if (arr[mid]>target){
        Binary_search(start,mid,target,arr);
    }
    else{
        Binary_search(mid+1,end,target,arr);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[5]={3,1,2,5,8};
    cout<<Binary_search(0,4,n,arr);

    return 0;
}