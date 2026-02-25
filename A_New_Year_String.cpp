#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool f5 = 0;

        for (int i = 0; i<n-3; i ++){
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5') f5 = 1;
        }

        bool f6 = 0;

        for (int i = 0; i<n-3; i ++){
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '6') f6 = 1;
        }
        if (f6) cout << 0 << endl;
        else {
            cout << (f5? 1 : 0 ) << endl;
        }
    }

    return 0;
}