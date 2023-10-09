#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={{1,3,5,7},
                   {10,11,16,20},
                   {23,30,34,60}};
    
    int start =0,end=11;
    int mid=0,target=34;
    while (start<end)
    {
        mid=(start+end)/2;
        int i=mid/4;
        int j=mid%4;
        if(arr[i][j]==target){
            cout<<"found";
            return 0;

        }
        else if (arr[i][j]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
        
    }
    cout<<"not found";
    

    return 0;
}