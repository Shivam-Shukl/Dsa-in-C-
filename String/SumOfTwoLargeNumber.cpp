#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string X ="1239",Y="67";
    int i=X.size()-1;
    
    int j=Y.size()-1;
    
    int bit=0,carry=0;
    char c;
    string str="";
    int num1,num2;
    while(i>=0 && j>=0){

        num1=X[i]-'0';
        num2 =Y[j]-'0';
        num1+=num2;
        num1+=carry;
        carry=num1/10;
        bit=num1%10;
        c='0'+bit;
        str+=c;
        j--,i--;
            
    }
    while(i>=0){

        num1=X[i]-'0';
        num1+=carry;
        carry=num1/10;
        bit=num1%10;
        c='0'+bit;
        str+=c;
        i--;
            
    }
    while(j>=0){
        num1=Y[i]-'0';
        num1+=carry;
        carry=num1/10;
        bit=num1%10;
        c='0'+bit;
        str+=c;
        j--;
            
    }
    if(carry==1){
        str+='1';
    }
    reverse(str.begin(),str.end());

    cout<<str;

    return 0;
}