#include<iostream>
using namespace std;

void isEvenOdd(int num){
    if(num%2==0){
        cout<<"even";
    }
    
    else{

        cout<<"odd";
    }
    
    return ;
    

}

int main(){
    int n1,n2;
    
    cout<<"input hte tow no's :";
    cin>>n1>>n2;
    cout<<"for first number :"<<endl;
    isEvenOdd(n1);
    cout<<endl<<"for 2 nd number:"<<endl;
    isEvenOdd(n2);



    return 0;

}