#include<iostream>
using namespace std;

int main(){
    int arr[5][5];
    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    cin>>arr[i][j];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target=12,i=4,j=0;
    while(i>=0 && j<4){
        if(arr[i][j]==target){
            cout<<"found";
            return 0;
        }
        else if(arr[i][j]>target){
            i=i-1;
        }
        else{
            j=j+1;
        }
        
    }
    cout<<"not found";

    return 0;
}