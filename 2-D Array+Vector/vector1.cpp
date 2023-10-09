#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>arr(5,2);
    cout<<arr.capacity()<<endl;
    arr.push_back(6);
    cout<<arr.capacity()<<endl;
    for(auto x:arr)
    cout<<x<<" ";

    return 0;
}