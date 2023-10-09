#include<iostream>
#include<stack>
using namespace std;

int main(){
    // stack<int>s;
    // s.push(4);
    // s.push(5);
    // s.push(6);
    // s.pop();
    // s.pop();
    // s.pop();
    // cout<<s.empty();

    string a="abcd";
  
    int n =a.size();
    stack<char>S;
    for(int i=0;i<n;i++){
        S.push(a[i]);
    }
    while(!S.empty()){
        S.pop();
    }


    return 0;
}