#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n, rk,ck,rd,cd; cin >> n >> rk >> ck >> rd >> cd;
        long long ans = 0;
        if (rd < rk) ans = max(ans,n-rd);
        if (rd > rk) ans = max(ans,rd);
        if (cd < ck) ans = max(ans,n-cd);
        if (cd > ck) ans = max(ans,cd);
        cout << ans << endl;
    }

    return 0;
}