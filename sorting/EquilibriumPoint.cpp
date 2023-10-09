#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"INPUT THE SIZE OF ARRAY :";

    cin>>n;
    int arr[n];
    cout<<endl<<"enter the element of array:"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<endl<<"the array is : ";
    for(int j=0 ;j<=n-1;j++){
        cout<<arr[j]<<" ";
    } 

    // Equilibrium Point code starts here.
    for(int a=0;a<n;a++){
        int l_sum , r_sum =0;
        
        for(int b=a-1;b>=0;b--){
            l_sum=l_sum+arr[b];
            

        }
        for(int c=a+1;c<=n-1;c++){
            r_sum=r_sum+arr[c];
            
        }
        if(l_sum==r_sum){
            cout<<endl<<a+1;
            return 0;
            
        }
        
    }

    return 0;
}