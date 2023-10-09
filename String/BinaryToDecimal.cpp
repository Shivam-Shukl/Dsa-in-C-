#include<iostream>
using namespace std;

int main(){

    int mul=1;
    int sum=0;
    int num;
    cout<<"Enter the value to convert into decimal:";
    cin>>num;
    while(num>0){
        int remainder=num%10;
        sum+=mul*remainder;
        mul=mul*2;
        num=num/10;10

    }
    cout<<"the decimal form is :"<<endl<<sum;

    return 0;
}