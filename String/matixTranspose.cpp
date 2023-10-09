#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"enter the size of matrix:";
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl<<"Transpose of the matrix";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}