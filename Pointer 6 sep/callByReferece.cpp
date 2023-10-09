#include <iostream>
using namespace std;

void fun(int *c, int *d) {
    *c = *c * 2;
    *d = *d * 2;
    cout << *c << " " << *d;
}

int main() {
    int a = 5, b = 8;
    fun(&a, &b); // Pass the addresses of a and b
    cout << endl << a << " " << b;

    return 0;
}
