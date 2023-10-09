#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int convertFive(int n) {
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            s[i]='5';
        }
    }
    n=stoi(s);
    return n;
    // Your code here
}

int main(){
    int n=2003;
    cout<<convertFive(n);
    return 0;
}