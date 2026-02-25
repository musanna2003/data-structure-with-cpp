#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        string s; cin >> s;

        int n1 = 0, n0 = 0;

        for (char c : s){
            if (c == '0') n0 ++;
            else n1 ++;
        }

        if (abs(n0 - n1) <= k) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}