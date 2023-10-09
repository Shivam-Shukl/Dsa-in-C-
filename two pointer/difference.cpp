#include<iostream>
using namespace std;

int main(){
    int arr[6]={3,4,10,17,23,28};

    int first=0,last=1;
    int dif=13;
    while(first<last){
        if(arr[last]-arr[first]==dif){
            cout<<"Mil gaya";
            return 0;
        }
        else if(arr[last]-arr[first]<dif){
            last++;
        }
        else{
            first++;
            
        }
    }
    cout<<"not found";
    

    return 0;
}