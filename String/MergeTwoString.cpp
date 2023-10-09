// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
    string S1="hello";
    string S2="Bye";
    string S3;
    int n=S1.size()+S2.size();
    int i=0,j=0,k=0;
    while(i<=n){
        if(i%2==0){
            S3=S3+S1[j];
            j++,i++;
            
        }
        else{
            S3+=S2[k];
            k++,i++;
        }
    }
    
    cout<<S3;
    

    return 0;
}