#include<iostream>
using namespace std;

int main(){
    string S="ACBBTHDAK";
    int n=S.size();
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=0;

    }
    for(int j=0;j<n;j++){

        int index=S[j]-'A';
        count[index]++;
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<count[i];j++){
            char c='A'+i;
            cout<<c<<" ";
        }
    }


    return 0;
}