#include<iostream>
using namespace std;

int main(){
    
    int A[8]={1,2,3,3,4,4,5,6};
    /* 1 st method to solve*/

    // int note=0,arr[8]={0,0,0,0,0,0,0,0},index=0;
    // for(int i=0;i<8;i++){
    //     if(A[i]!=note){
    //         arr[index]=A[i];
    //         note=A[i];
    //         index++;
    //     }   
    // }
    // for(int j=0;j<8;j++){
    //     cout<<arr[j]<<" ";
    // }
    
    /* 2nd method to solve */
    int note =0,index =0;
    for(int i=0;i<8;i++){
        if(note!=A[i]){
            A[index]=A[i];
            index++;
            note=A[i];
        }
    }
    for(int j=0;j<index;j++){
        cout<<A[j]<<" ";
    }

    return 0;
}