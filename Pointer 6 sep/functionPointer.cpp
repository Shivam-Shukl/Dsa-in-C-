#include<iostream>
using namespace std;

void fun(int c,int b)
{
    c=c*2;
    b=b*2;
    cout<<c<<" "<<b;
 
}
void fun1(int *c,int *b)
{
    *c=*c*2;
    *b=*b*2;
    cout<<*c<<" "<<*b<<endl;
 
}

int main(){
    int a=5,b=8;
    fun(a,b);
    cout<<endl<<a<<" "<<b<<endl;
    //why it is not changing ? 
    //Solution : Because it is creating another address and changing the value inside it.
    //To solve the problem we pass address
    //we pass pointer in function to solve the problem as it is pointer it will point the address of the passed value.
    //
    fun1(&a,&b);//call be pointer.
    cout<<endl<<a<<" "<<b;


    return 0;
}