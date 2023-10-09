#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    cout<<arr<<endl;//give address 
    cout<<&arr<<endl;//give same as above the address of array where it has been stored.
    cout<<*(arr+0)<<endl; //give the first element of array.(*)means the value which is present at the address.

    // int arr1[5]={10,20,30,40,60};
    // int *p;
    // p=arr1;

    // for(int i=0;i<5;i++){
    //     cout<<*p<<" "; 
    //     p++;
    // }

    return 0;
}