#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

int main(){
    string str="Rohit Negi";
    string r="rohit";
    string t="Mohit";
    r=r+t;
    // cout<<r.size();

    cout<<r;
    sort(r.begin(),r.end());
    cout<<endl<<r;
    reverse(r.begin(),r.end());
    cout<<endl<<r;
    
    

    return 0;
}