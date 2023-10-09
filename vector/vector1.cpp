#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>v;
    for(int i=1;i<=10;i++)
    v.push_back(i*13%10);
 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<v.capacity()<<endl;
    /*acsending order */

    sort(v.begin(),v.end());
    
    /*descending order */

    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;

    for(auto x:v)
    cout<<x<<" ";
    
    v.pop_back();
    cout<<endl;
    for(auto x:v)
    cout<<x<<" ";

    /* to make a vector of fixed size 
    we do 
    vector<int>arr(size)
    to intialize 
    we do 
    vector<int>arr(size,intialise(integer value))*/
    vector<int>arr1(5,2);
    for(auto x:arr1)
    cout<<x<<" ";

    

    return 0;
}

