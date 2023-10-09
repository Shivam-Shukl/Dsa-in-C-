#include<iostream>
using namespace std;

int main(){
    int arr[7]={66, 67, 100,2, 4, 6, 19};
    int mid,start=0,end=6;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid+1]>arr[mid] && arr[mid-1]<arr[mid]){
            cout<<mid;
            return 0;

        }
        else if (arr[mid+1]>arr[mid] && arr[mid]>arr[mid-1])
        {
            end=mid-1;
        }
        else{
            cout<<" ";
        }
        
        
    }
    start=0;end=4;
    while(start<=end){
        mid =(start+end)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            cout<<mid+1;
            return 0;

        }
        else if(arr[mid+1]>arr[mid] && arr[mid]>arr[mid-1]){
            start=mid+1;
        }
        else{
            cout<<" ";
        }
    }

    

    return 0;
}
