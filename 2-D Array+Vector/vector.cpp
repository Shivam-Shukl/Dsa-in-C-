#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>v; 
    for(int i=1;i<=10;i++)
    v.push_back(i*13%10);

    sort(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<" ";

    return 0;
}