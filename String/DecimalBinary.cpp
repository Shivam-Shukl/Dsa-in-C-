#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int num;
    cout<<"enter the value to convert :";
    cin>>num;
    int mul=1;

    while(num>0){
        int digit =num%2;
        sum+=digit*mul;
        num=num/2;
        mul=mul*10;
    }
    cout<<endl<<"The value in Binary form:";
    cout<<sum;

    return 0;
}