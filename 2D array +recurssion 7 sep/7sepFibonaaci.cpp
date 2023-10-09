#include<iostream>
using namespace std;

/*
Fibonacci series
0 1 1 2 3 5 8 15 21 and so on 
In fibonacci series the nth element is sum of previous two elemetn
For example 3rd element is sum of first and second element that is F(3)=F(2)+F(1) i.e 1=0+1
*/

int F(int n)
{
    int num;
    if(n==1 ){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return F(n-1)+F(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<F(n);

    return 0;
}