#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};

    cout<<arr<<endl;    //Address of first element in array 
    cout<<&arr<<endl;   // Memory location of array
    cout<<&arr[0]<<endl; // Address of first element in array 
    cout<<&arr[1]<<endl; //Address of second element in array 
    cout<<&arr[2]<<endl; //Address of third element in array 

    return 0;
} 