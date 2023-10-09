#include<iostream>
#include<cmath>
using namespace std;

int sum_possible(int n, int num, int total, int power, int &count) {
    if (total == num) {
        count++;
        return 0;
    }
    if (total > num || n > 100) { // Added n > 100 as a base case
        return 0;
    }
    sum_possible(n + 1, num, total, power, count);
    sum_possible(n + 1, num, total + pow(n, power), power, count);
    return 0;
}

int main() {
    int num,power;
    cout << "enter the number and power:" << endl;
    cin >> num>>power;
    int total = 0, count = 0;
    sum_possible(1, num, total, power, count); // Removed cout here
    cout << "Number of ways: " << count << endl; // Added cout to display the result
    return 0;
}
