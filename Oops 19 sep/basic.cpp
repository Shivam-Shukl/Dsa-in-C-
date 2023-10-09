#include<iostream>
using namespace std;

class Student
{
    public:
    int roll_no;
    string name;
    string branch;
    
};
int main(){

    Student object;
    object.roll_no=33;
    object.name="Shivam";
    object.branch="data science";
    cout<<object.roll_no;

    return 0;
}