// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // Write C++ code here
    string S="abba";
    string s=S;
    reverse(s.begin(),s.end());
    if(s==S){
        cout<<"1";
    }
    else{
        cout<<"0";
    }

    return 0;
}