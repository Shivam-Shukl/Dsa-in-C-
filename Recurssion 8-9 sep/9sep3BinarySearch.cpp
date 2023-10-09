#include<iostream>
using namespace std;

int binary_search(int *a,int start,int end,int key){
    if(end<start){
        return 0;
    }
    int mid=end+(start-end)/2;
    if(a[mid]==key)
    return 1;
    else if(a[mid]>key)
    return binary_search(a,start,mid-1,key);
    else
    return binary_search(a,mid+1,end,key);
}


int main(){
    int arr[6]={2,4,21,8,9,12};

    int key;
    cin>>key;
    
    cout<<binary_search(arr,0,5,key);
    return 0; 
}