#include <iostream> 
#include <string>

using namespace std;

void String_possible(string s, int size, int index, string total) {
    if (size == index) {
        
        return;
    }
    cout << total <<" ";
    String_possible(s, size, index + 1, total);
    String_possible(s, size, index + 1, total + s[index]);
}

int main() {
    string s = "abcd";
    string total = "";
    String_possible(s, s.length(), 0, total);

    return 0;
}
