#include<iostream>
using namespace std;

void print_num(int start,int end){
    if(start>end){
        
        return ;
    }
    cout<<start<<" ";
    print_num(start+1,end);
}


void print_num1(int start,int end){
    if(start>end){ 
        return ;
    }
    print_num1(start+1,end);
    cout<<start<<" ";
    
}

int main()
{
    int n;
    cin>>n;
    print_num(n,10);
    cout<<endl<<"In Reverse order"<<endl;
    print_num1(n,10);
    return 0;
}