#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={{0,1,2,3},
                   {4,5,6,7},
                   {8,9,10,11},
                   {12,13,14,15}};
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // int col=0;
    // while(col<4){
    //     int i=0,j=col;
    //     while(j>=0){
    //         cout<<arr[i][j]<<" ";
    //         i++,j--;

    //     }
    //     col++;
    // }
    // int row=1;
    // while(row<4){
    //     int i=row,j=3;
    //     while(i<4){
    //         cout<<arr[i][j]<<" ";
    //         i++,j--;
    //     }
    //     row++;
    // }
 

    return 0;
}