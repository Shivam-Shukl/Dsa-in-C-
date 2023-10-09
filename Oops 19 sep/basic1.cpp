#include<iostream>
using namespace std;

class Bank
{
    public:
    int balance;
    string Name;
    public:
    
    void SetValue(int amount,string name){
        balance=amount;
        Name=name;
    }

    void check_balance()
    {
        cout<<balance<<" ";
    }
    void withdraw(int n){
        balance-=n;
        cout<<n<<"rs nikal liye";
    }
    
};
int main(){

    Bank object;
    object.SetValue(2000,"shivam");
  
    object.check_balance();
    object.withdraw(25);
    object.check_balance();

    return 0;
}