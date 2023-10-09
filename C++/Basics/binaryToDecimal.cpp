#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Binary to deciamal converter "<<endl<<"Input the Binary no :";
    cin>>n;
    int mul=1;
    int sum=0;
    cout<<"Decimal no of "<<n<<" is :";
    while (n>0){
        int digit =n%10;
        sum =sum+ digit*mul;
        mul=mul*2;
        n=n/10;
    }
    
    cout<<sum;

    return 0;
}