#include <iostream>
#include <vector>

using namespace std;

long long merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    long long inversionCount = 0;
    int i = left;     // Index for the left subarray
    int j = mid + 1;  // Index for the right subarray
    int k = left;     // Index for the merged subarray

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inversionCount += (mid - i + 1);  // Count inversions
        }
    }

    // Copy the remaining elements of the left subarray
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy the remaining elements of the right subarray
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy the merged elements back to the original array
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inversionCount;
}

long long mergeSort(vector<int>& arr, vector<int>& temp, int left, int right) {
    long long inversionCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively count inversions in the left and right subarrays
        inversionCount += mergeSort(arr, temp, left, mid);
        inversionCount += mergeSort(arr, temp, mid + 1, right);

        // Merge and count inversions
        inversionCount += merge(arr, temp, left, mid, right);
    }
    return inversionCount;
}

long long countInversions(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp(n);
    return mergeSort(arr, temp, 0, n - 1);
}

int main() {
    vector<int> arr = {2, 3,1,4,2,5};
    long long inversionCount = countInversions(arr);
    cout << "Inversion Count: " << inversionCount << endl;
    return 0;
}
