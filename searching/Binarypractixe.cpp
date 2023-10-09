#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input the array size:";
    cin>>n;
    int a[n];
    cout<<endl<<"input the array element :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl<<"the array is :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int c;
    cout<<endl<<"enter the element to found:";
    cin>>c;
    int start=0,end=n-1,mid=0;
    while(start<=end){
        mid=(start+end)/2;
        if(a[mid]==c){
            cout<<endl<<"found";
            return 0;
        }
        else if(a[mid]<c){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    
    }





    return 0;
}