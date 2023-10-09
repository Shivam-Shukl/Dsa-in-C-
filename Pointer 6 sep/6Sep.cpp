#include<iostream>
using namespace std;

const int col = 4;  // Constant for the second dimension ,c++ expect constant size of 2 dimensional array. 

void fun(int a[][col], int row) {
    int count = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            a[i][j] = count;
            count++;
        }
    }
}

int main() {
    int arr[3][col];
    fun(arr, 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
