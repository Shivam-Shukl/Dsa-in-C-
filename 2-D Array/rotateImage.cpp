#include<iostream>
using namespace std;

int main(){

    int arr[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    cin>>arr[i][j];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i] =temp;
        }
    }
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            int temp=arr[j][i];
            arr[j][i]=arr[j][2-i];
            arr[j][2-i]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}