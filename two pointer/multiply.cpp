#include<iostream>
using namespace std;

int main(){
    int arr[6]={3,7,13,41,49,51};

    int first=0,last=5;
    int Multi=91;
    while(first<last){
        if(arr[first]*arr[last]==Multi){
            cout<<"Mil gaya";
            return 0;
        }
        else if(arr[first]*arr[last]<Multi){
            first++;
        }
        else{
            last--;
        }
    }
    cout<<"not found";
    

    return 0;
}