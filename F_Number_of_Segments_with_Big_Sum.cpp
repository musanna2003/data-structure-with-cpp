#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s = to_string(n);
        char mn = s[0];
        for (char ch : s){
            mn = min (ch,mn);
        }
        cout << mn << endl;
    }

    return 0;
}