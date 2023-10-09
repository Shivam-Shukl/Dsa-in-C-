#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Sorting by bubble sort:"<<endl<<"input array size"<<endl;
    cin>>n;

    int arr[n];
    

    cout<<"input the array element"<<endl;

    for(int a=0;a<=n-1;a++){
        cin>>arr[a];
    }
    cout<<"the unsorted array is "<<endl;
    for(int b=0;b<=n-1;b++){
        cout<<arr[b]<<" ";
    }

    for(int i=0 ;i<n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    


    }
    cout<<endl<<"the sorted array is "<<endl;
    for(int c=0;c<=n-1;c++){
        cout<<arr[c]<<" ";
    }




    return 0;

}