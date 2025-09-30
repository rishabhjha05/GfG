#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    string hex="",digits="0123456789abcdef";
    while(a){
        hex+=digits[a%16];
        a/=16;
    }
    for(int i=hex.size()-1;i>=0;i--)
        cout<<hex[i];
    return 0;
}