#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cp = 0;
        int ci1 = 0;
        int ci2 = 0;
        bool f = 0;
        if ( s[0] == 'I' ) ci1 ++;
        if ( s[n-1] == 'I' ) ci1 ++;
        for ( int i = 1; i < n-1; i ++){
            if (s[i] == 'I' && s[i-1] == s[i+1] && s[i+1] != 'I') ci2 ++;
            if (s[i] == 'I' && s[i-1] != s[i+1] && s[i+1] != 'I' && s[i-1] != 'I') ci1 ++;
        }
        for ( int i = 1; i < n; i ++){
            if (s[i] == s[i-1]) cp ++;
        }
        if (s[0] == s[n-1]) f = 1;

        cout << (k*(cp + ci1 + (2*ci2))) + (f * (k-1)) << endl;
        // cout << cp << " " << ci1 << " " << ci2 << endl;

    }

    return 0;
}