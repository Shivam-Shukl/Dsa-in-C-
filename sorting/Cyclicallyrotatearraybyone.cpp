#include<iostream>
using namespace std;

int main(){

    int n;
    
    cin>>n;
    int arr[n];
    
    for(int a=0;a<=n-1;a++){
        cin>>arr[a];
    }

    
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--){
        
        arr[i+1]=arr[i];
        
    }
    
    arr[0]=temp;

    for(int j=0;j<=n-1;j++){
        cout<<arr[j]<<" ";
    }
    

    return 0;
}