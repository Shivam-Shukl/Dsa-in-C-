#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"input the array size:";
    cin>>n;
    int arr[n];
    cout<<endl<<"input the array element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"the array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int start=0,end=5,mid,index;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){

            cout<<endl<<mid<<" "<<arr[mid];
            return 0;
        }
        
        
        
        else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1])
        start=mid+1;
        else
        end=mid-1;
    }



    return 0;
}