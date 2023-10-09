#include<iostream>
using namespace std;

int main(){
    int arr[6]={4,5,0,1,2,3};

    int i=0,j=1;
    while(i<6 && j<=6){
        if(arr[i]>arr[j]){
            cout<<j;
            return 0;
        }
        else{
            i++,j++;
        }
    }

    return 0;
}