#include <iostream>
using namespace std;

void Double_value(int a[] ,int size){  // a[]is a pointer and is same as *a
    // for(int i=0;i<size;i++)
    // a[i]=a[i]*2;
    //my doubt was why there pointer be used insted of it just pass arr
    //but we know *p=arr we pass like this so,that's it.

    for(int i=0;i<size;i++){
        *a=*a*2;
        *a++;
    }
}

void Print(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    Double_value(arr, 5);
    Print(arr, 5);

    return 0;
}
