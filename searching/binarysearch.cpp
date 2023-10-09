#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input the size of array ";
    cin>>n;
    int arr[n];
    cout<<endl<<"input the array elements "<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<endl<<"the array is :";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    int target;
    cout<<endl<<"input the element to find ";
    cin>>target;
    int mid,start=0,end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            cout<<endl<<"mil gaya ";
            return 0;
        }
        else if (arr[mid]>target)
        {
            end=mid-1;
            /* code */
            
        }
        else{
            start=mid+1;
        }
        
    }
    cout<<"element not found";


    return 0;
}