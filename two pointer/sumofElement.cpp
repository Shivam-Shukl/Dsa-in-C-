#include<iostream>
using namespace std;

int main(){
    int arr[6]={2,3,11,17,25,29};

    int first=0,last=5;
    int sum=40;
    while(first<last){
        if(arr[first]+arr[last]==sum){
            cout<<"Mil gaya";
            return 0;
        }
        else if(arr[first]+arr[last]<sum){
            first++;
        }
        else{
            last--;
        }
    }
    cout<<"not found";
    

    return 0;
}