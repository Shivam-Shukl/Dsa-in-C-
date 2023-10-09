#include<iostream>
using namespace std;

/*
Recurssion is function which call itself and it have a breaking point in it , from where the code stops.
*/

int fact(int n)
{
    int num;
    if(n==0){
        return 1;
    }
    num=n*fact(n-1);
    return num;

}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);

    return 0;
}