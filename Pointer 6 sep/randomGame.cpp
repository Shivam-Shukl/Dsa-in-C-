#include<iostream> 
using namespace std;

int main(){

    int x=5;
    int *p=&x;
    cout<<x<<endl;  //X value
    cout<<&x<<endl; //X address
    cout<<p<<endl;  //X address
    cout<<*p<<endl; //X value
    cout<<&p<<endl; //P address

    

    return 0;
}