#include<iostream>
using namespace std;

int main(){
    string S="acbthaadk";
    int n=S.size();
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=0;

    }
    for(int j=0;j<n;j++){

        int index=S[j]-'a';
        count[index]++;
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<count[i];j++){
            char c='a'+i;
            cout<<c<<" ";
        }
    }


    return 0;
}