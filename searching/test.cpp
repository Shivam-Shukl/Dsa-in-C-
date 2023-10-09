// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"input the arry size:";
    cin>>n;
    int arr[n];
    cout<<endl<<"Input the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<" The array is :";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    
    int note=0,index=0,A[n];
    for(int i=0;i<n;i++){
        if(note!=arr[i]){
            A[index]=arr[i];
            index++;
            note=arr[i];
            
        }
    }
    cout<<endl;
    for(int j=0;j<index;j++){
        cout<<A[j]<<" ";
    }

    return 0;
}