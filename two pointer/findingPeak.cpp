/*
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.*/
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<endl<<"enter the elements of array :";
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    cout<<endl<<"the array is :";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    
    int temp=arr[0];
    
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>temp){
            temp=arr[i+1];
        }
    }
    cout<<endl<<"the peak element is :"<<temp;


    return 0;
}