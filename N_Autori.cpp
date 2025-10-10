#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int f = 1;
    for (char c : s){
        if (f) {
            cout << c;
            f = 0;
        }
        else if (c == '-') f = 1;

    }
    
    return 0;
}