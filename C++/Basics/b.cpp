#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

string decToBinary(int n)
{
    string binary = "";
    while (n > 0)
    {
        binary += to_string(n % 2);
        n = n / 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main()
{
    int n;
    cin>>n;
    cout << decToBinary(n) << endl;
    return 0;
}
