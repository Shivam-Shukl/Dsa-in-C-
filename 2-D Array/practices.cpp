#include<iostream>
using namespace std;

int  main(){
    int n,m;
    cout<<"Enter the value of row and column :";
    cin>>n;
    cin>>m;
    int arr[n][m];
    cout<<"enter the value of array"<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the array is :"<<endl;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }/*1) TRANSPOSE OF  MATRIX */
    // for(int i =0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         int temp=arr[i][j];
    //         arr[i][j]=arr[j][i];
    //         arr[j][i]=temp;
    //     }
    // }
    // cout<<"the traspose of the matrix is "<<endl;
    // for(int i =0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // /*2) fliping the array */
    // for(int i=0;i<n/2;i++){
    //     for(int j=0;j<m;j++){
    //         int temp=arr[i][j];
    //         arr[i][j]=arr[n-i-1][j];
    //         arr[n-i-1][j]=temp;

    //     }
    // }
    // cout<<"flip of the matrix is "<<endl;
    // for(int i =0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    /* 3) rotate image*/

    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<m;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<m/2;i++){
        for(int j=0;j<n;j++){
            int temp=arr[j][i];
            arr[j][i]=arr[j][m-i-1];
            arr[j][m-i-1]=temp;
        }
    }
    cout<<"matrix after rotation :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    


    return 0;
}