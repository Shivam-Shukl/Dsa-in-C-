#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"INPUT THE SIZE OF ARRAY :";

    cin>>n;
    int arr[n];
    cout<<endl<<"enter the element of array:"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<endl<<"the usorted array is : ";
    for(int j=0 ;j<=n-1;j++){
        cout<<arr[j]<<" ";
    }
    for(int k=0;k<=n-1;k++){

        for(int l=k;l>=0;l--){
            if(arr[l]>arr[l+1]){
                int temp=arr[l];
                arr[l]=arr[l+1];
                arr[l+1]=temp;
            }
            else{
                break;
            }
        }
    }
    cout<<endl<<"the sorted array is :";
    for(int a=0;a<=n-1;a++){
        cout<<arr[a]<<" ";
    }

    return 0;
}