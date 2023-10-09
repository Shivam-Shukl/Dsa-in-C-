#include<iostream>
using namespace std;

int main(){
    int arr[9]={5,6,7,8,9,1,2,3,4};
    int key=8;
    int start=0,end=8,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(key==arr[mid]){
            cout<<mid;
            return 0;
        }
        else if(arr[start]<arr[mid]){
            if(key>=arr[start] && key<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(key>arr[mid] && key<=arr[end]){
                start= mid+1;
            }
            else{
                end=mid-1;
            }
        }

    }
    
    

    return 0;
}