#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string Bit="";
    while(n>0){
        Bit+=to_string(n%2);
        n/=2;
    }
    reverse(Bit.begin(), Bit.end());
    
    for(int j=Bit.size()-1;j>0;j--){
        if(Bit[j]==1){
            cout<<j+1;
        }
    }
        // 

    return 0;
}