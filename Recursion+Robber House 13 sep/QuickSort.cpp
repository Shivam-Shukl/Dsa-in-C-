#include<iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int First_poi = start - 1;
    for (int Second_poi = start; Second_poi < end; Second_poi++) {
        if (arr[Second_poi] < pivot) {
            First_poi++;
            swap(arr[First_poi], arr[Second_poi]);
        }
    }
    swap(arr[First_poi + 1], arr[end]);
    return First_poi + 1;
}

void Quick_sort(int arr[], int start, int end) {
    if (start < end) {
        int index = partition(arr, start, end);
        Quick_sort(arr, start, index - 1);
        Quick_sort(arr, index + 1, end);
    }
}

int main() {
    int n;
    cout << "input the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "input the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Quick_sort(arr, 0, n - 1);
    cout << "the sorted array is " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
