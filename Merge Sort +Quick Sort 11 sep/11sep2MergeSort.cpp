#include<iostream>
using namespace std;

void Merge_array(int arr[], int l, int r, int mid) {
    int size = r - l + 1;
    int *a = new int[size];
    int pos = 0;
    int first = l;
    int second = mid + 1;
    
    while (first <= mid && second <= r) {
        if (arr[first] < arr[second]) {
            a[pos] = arr[first];
            first++, pos++;
        }
        else {
            a[pos] = arr[second];
            pos++, second++;
        }
    }
    
    while (first <= mid) {
        a[pos] = arr[first];
        pos++, first++;
    }
    
    while (second <= r) {
        a[pos] = arr[second];
        pos++, second++;
    }
    
    pos = 0;
    mid = l;
    
    while (mid <= r) {
        arr[mid] = a[pos];
        mid++, pos++;
    }
    
    delete[] a;
}

void Merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        Merge_sort(arr, l, mid);
        Merge_sort(arr, mid + 1, r);
        Merge_array(arr, l, r, mid);
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Merge_sort(arr, 0, n-1);
    cout<<"the sorted array is "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
