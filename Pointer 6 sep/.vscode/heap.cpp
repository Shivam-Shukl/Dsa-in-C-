#include<iostream>
using namespace std;

int main(){
    int *p=new int;
    *p=10;
    cout<<p;

    int *x=new int[10];
    for(int i=0;i<10;i++){
        x[i]=i*2;
    }
    for(int i=0;i<10;i++){
        cout<<x[i]<<" ";
    }
    return 0;


}