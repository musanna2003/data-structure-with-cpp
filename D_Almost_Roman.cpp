#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,q;
        cin >> n >> q;
        int tot = 0;
        int sc = 0;
        int tar = 0;
        vector <char> v (n);
        for ( int i = 0 ; i < n; i++){
            cin >> v[i];
            if (v[i] == '?') tar ++;
        }

        for ( int i = 0 ; i < n; i++){
            if (v[i] == '?' && (v[i+1] == 'V' || v[i+1] == 'X')) sc++;
            else if (v[i] == 'X') tot += 10;
            else if (v[i] == 'v') tot += 5;
            else if (v[i] == 'I' && i != n-1 && (v[i+1] == 'X' || v[i+1] == 'V')) tot += -1;
            else tot ++;
        }
    }

    return 0;
}