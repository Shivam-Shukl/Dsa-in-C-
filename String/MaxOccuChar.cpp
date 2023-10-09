#include<iostream>
using namespace std;

int main(){
    string S="output";
    int n=S.size();
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        int index=S[i]-'a';
        count[index]++;
    }
    int max=count[0],high=0;
    for(int i=0;i<26;i++){
        if(count[i]>max){
            max=count[i];
            high=i;
        }
        
    }
    char c=high+'a';
    cout<<c;


    return 0;
}

