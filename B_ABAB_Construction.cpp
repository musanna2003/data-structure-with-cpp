#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int it;
        bool f= 1;
        if (n % 2 == 0){
            for (int i = 0; i < n; i+= 2){
                if( s[i] != '?' && s[i] == s[i+1]) f= 0;
            }
            cout << (f? "YES" : "NO") << endl;
        }
        else {
            if (s[0] == 'b') {
                    f = 0;
                }
            for (int i = 1; i < n; i+= 2){
                if( s[i] != '?' && s[i] == s[i+1]) f= 0;
            }
            cout << (f? "YES" : "NO") << endl;
        }
    }

    return 0;
}