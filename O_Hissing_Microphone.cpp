#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int f = 1;
    int siz = s.size();
    for (int i = 0; i < siz - 1; i ++){
        if (s[i] == 's' && s[i + 1] == 's'){
            cout << "hiss";
            f = 0;
            break;
        }
    }
    if (f) cout << "no hiss";
    
    return 0;
}