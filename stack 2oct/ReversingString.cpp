#include<iostream>
#include<stack>
using namespace std;

void Reverse(string a)
{
    int n =a.size();
    stack<char>S;
    for(int i=0;i<n;i++)
    {
        S.push(a[i]);
    }
    cout<<"teh origingnal array is : "<<a<<endl;
    cout<<"the reverser array is : ";
    while(!S.empty())
    {
        cout<<S.top(); 
        S.pop();
    }

    return ;
}
int main()
{
    
    string a;
    cin>>a;
  
    Reverse(a);
    
    return 0;
}