#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int cas = 0; cas < cases; cas++) {
        char s[10001];
        cin>>s;
        int total = 0;
        int length= strlen(s);
        for (int i = 0; i<length ; i++) {
            if ('0' <= s[i] && s[i] <= '9') total += s[i] - '0';
        }
        cout<<total<<endl;
    }
    return 0;
