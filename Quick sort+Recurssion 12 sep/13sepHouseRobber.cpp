#include<iostream>
using namespace std;

int sum_pos(int arr[], int size, int &sum, int index, int total) {
    if (index >= size) {
        sum = max(sum, total);
        return sum;
    }
    // return sum_pos(arr, size, sum, index + 2, total + arr[index]) || sum_pos(arr, size, sum, index + 1, total);
    int withCurrent = sum_pos(arr, size, sum, index + 2, total + arr[index]);
    int withoutCurrent = sum_pos(arr, size, sum, index + 1, total);

    return max(withCurrent, withoutCurrent);
}

int main(){
    int arr[6] = {5, 6, 1, 6, 7, 11};
    int sum = 0;
    cout << sum_pos(arr, 6, sum, 0, 0);

    return 0;
}
