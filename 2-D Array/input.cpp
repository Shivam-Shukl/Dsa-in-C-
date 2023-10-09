#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    cin>>arr[i][j];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
            sum=sum+arr[j][i];
            cout<<arr[j][i]<<" ";
        }
        cout<<sum<<endl;
        cout<<endl;
    }
    int target=46;
    for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){

    
        
            
            
            if(arr[j][i]==target){
                cout<<endl<<"found";
                return 0;
            }
        }
        
        
    }
    cout<<endl<<"not found";


    return 0;
}