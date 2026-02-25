#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s,t; cin>> s >> t;
        int ans = 1;
        for (int i = 0; i < n; i++){
            if (s[i] == '1') break;
            if (s[i] == '0' && t[i] == '1'){
                ans = 0; break;
            }
        }
        cout << (ans? "YES" : "NO") << endl;
    }

    return 0;
}