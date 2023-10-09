#include<iostream>
using namespace std;

int main(){

    int arr[6]={2,4,11,17,25,29};
    int T_sum;
    int n=6;

    cout<<"input the sum to find: ";
    cin>>T_sum;

    int i=0,j=n-1;

    while(i<j){
        if(arr[i]+arr[j]==T_sum){
            cout<<"found";
            return 0;
        }
        else if(arr[i]+arr[j]>T_sum){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"not found";



    return 0;
}