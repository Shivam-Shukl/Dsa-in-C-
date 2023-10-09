#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input the size of array :";
    cin>>n;
    int arr[n];
    cout<<"input the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"the give array is :";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    // first method
    //int give_sum=19;
    // for(int a=0;a<n;a++){
    //     int sum=0;
    //     for(int b=a;b<n;b++){
    //         sum=sum+arr[b];
    //         if(sum==give_sum){
    //             cout<<endl<<"Yes";
    //             return 0;
    //         }

    //     }
    // }

    int i=0,j=0,sum=0,given=19;
    while(i<=n-2 && j<=n-1){
        
        if(sum==given){
            cout<<endl<<"mil gaya";
            return 0;
        }
        else if(sum>given){
            sum-=arr[i];
            i++;
        }
        else{
            sum+=arr[j];
            j++;
        }


    }
    cout<<endl<<"not found";

    return 0;
}