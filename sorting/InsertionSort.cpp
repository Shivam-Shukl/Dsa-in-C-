#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input the size of array:";
    cin>>n;
    int arr[n];
    cout<<endl<<"enter the elemets of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"the unsorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int a=0;a<n-1;a++){
        for(int j=a;j>=0;j--){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<endl<<"the sorted array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}