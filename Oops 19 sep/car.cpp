#include<iostream>
using namespace std;

class car
{
    int cost;
    int mileage;
    public:
    car(int input,int input1)
    {
        cost=input;
        mileage=input1;
        cout<<cost<<" "<<mileage<<endl;;

    }
    ~car()
    {
        cout<<"destructor executed";
    }

};

int main(){
    car c1(20000,45);
    cout<<sizeof(c1);

    return 0;
}