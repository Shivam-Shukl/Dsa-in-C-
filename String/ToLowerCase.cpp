#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    string s = "Hello";
    char c;
    int n =s.size();
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='z'){
            c=s[i]-'A';
            c=c+'a';
            s[i]=c;
        }
        
    }
    cout<<s;

    return 0;
}