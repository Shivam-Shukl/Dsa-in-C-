#include<iostream>
using namespace std;

void find(string s,int index){
    
    if(index==s.size()-1){
        cout<<s<<" ";
        return ;
    }

    for(int i=index;i<s.size();i++){
        if(s[i]!=s[index]){
            swap(s[i],s[index]);
            find(s,index+1);
            swap(s[i],s[index]);
                     
        }
        
        
    }
}

int main(){
    string s;
    cin>>s;
    find(s,0);

    return 0;
}