#include<iostream>
using namespace std;

int sum_pos(int arr[], int size, int &sum, int index, int total) {
    if (index >= size) {
        sum = max(sum, total);
        return sum;
    }

    int withCurrent = sum_pos(arr, size, sum, index + 2, total + arr[index]);
    int withoutCurrent = sum_pos(arr, size, sum, index + 1, total);

    return max(withCurrent, withoutCurrent);
}

int main() {
    int arr[4] = {5,4,3,7};
    int sum = 0;
    cout << max(sum_pos(arr, 3, sum, 0, 0),sum_pos(arr, 4, sum, 1, 0))<<endl;
    
    return 0;
}
