#include<iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int i = start, j = start;
    while (j <= end) {
        if (arr[end] > arr[j]) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++, j++;
        }
        else {
            j++;
        }
    }
    return i - 1;
}

void Quick_sort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int index = partition(arr, start, end);
    Quick_sort(arr, start, index - 1);
    Quick_sort(arr, index + 1, end);
}

int main() {
    int n;
    cout << "input the array size" << endl;
    cin >> n;

    int arr[n]; // Declare the array after reading the value of n

    cout << "enter the array elements" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "the sorted array is" << endl;
    Quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}
