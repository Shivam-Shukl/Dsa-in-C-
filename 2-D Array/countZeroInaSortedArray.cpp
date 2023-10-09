#include<iostream>
using namespace std;

int main(){
    int arr[4][3]={{0,0,0},
                   {0,0,1},
                   {0,0,1},
                   {0,0,1}};
    
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int i=0,j=2,count_zero=0;
    while (i<4 && j>=0)
    {
        if(arr[i][j]==0){
            count_zero+=j+1;
            i++;

        }
        else{
            j--;
        }
    }
    cout<<count_zero;
    
    

    return 0;
}