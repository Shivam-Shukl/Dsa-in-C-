#include<iostream>
using namespace std;

int power(int n)
{
    int num;
    if(n==0){
        return 1;
    }
    return 3*power(n-1);
    

}
int main(){
    int n;
    cin>>n;
    cout<<power(n);

    return 0;
}