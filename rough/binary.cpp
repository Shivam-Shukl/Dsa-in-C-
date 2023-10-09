// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

class Solution{
    
    public:
    int binarysearch(int arr[], int n, int k) {
        int start=0,end=n-1,mid=0;
        while(start<end){
            mid=start+(end-start)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]<k){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        
    }
};

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the k :";
    cin>>k;
    Solution *s=new Solution();
    cout<<s->binarysearch(arr,n,k);
    
  

    return 0;
}