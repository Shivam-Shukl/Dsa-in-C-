#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<vector<int>>arr(3,vector<int>(3));
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    cin>>arr[i][j];

    sort(arr.begin(),arr.end());

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    sort(arr[i].begin(),arr[i].end());

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}