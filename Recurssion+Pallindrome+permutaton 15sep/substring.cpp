#include <iostream> 
#include <string>

using namespace std;

void String_possible(string s,int index, string total) {
    if(total.size()!=0){
        cout<<total<<" ";
    }
    if (s.size() == index) {
        
        return;
    }
    if(total.size()==0){
        String_possible(s,index+1,total);
    }
    
    String_possible(s,index + 1, total + s[index]);
}

int main() {
    string s = "abcd";
    string total = "";
    String_possible(s, 0, total);

    return 0;
}
