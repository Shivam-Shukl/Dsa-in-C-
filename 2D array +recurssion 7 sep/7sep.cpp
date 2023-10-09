#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int *p=new int[m]; //p ek pointer hi jo point kar raha hi ek array ko.
    for(int i=0;i<m;i++)
    p[i]=i*2;
    for(int i=0;i<m;i++)
    cout<<p[i]<<" ";



    return 0;
}