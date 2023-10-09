#include<iostream>
using namespace std;

int main(){
    int num =30;
    cout<<num<<endl;
    int *p;
    p=&num;//it is pointing to address of num

    cout<<p<<endl<<*p<<endl<<&p<<endl;
    //p is pointing to address of num,
    //*p is pointing to stored value in num 
    //&p is giving the address of p in Hexadecimal form.
    
    
    *p=20;
    cout<<num;

    return 0;
}