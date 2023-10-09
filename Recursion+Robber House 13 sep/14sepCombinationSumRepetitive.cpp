#include<iostream>
using namespace std;

int sum_possible(int arr[], int size, int index, int total, int sum, int &ans){
    if(index == size){
        if(sum == total){
            ans = 1;
        }
        return 0;
    }

    if(sum > total){
        return 0;
    }

    // Include the current element in the sum
    sum_possible(arr, size, index , total, sum + arr[index], ans);

    // Exclude the current element from the sum
    sum_possible(arr, size, index + 1, total, sum, ans);

    return 0;
}

int main(){
    int arr[3] = {3, 2, 7};
    int ans = 0;
    sum_possible(arr, 3, 0, 8, 0, ans);
    cout << ans;

    return 0;
}
