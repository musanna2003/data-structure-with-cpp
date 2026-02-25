#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        bool f = 0;
        long long mn = LONG_LONG_MAX;
        long long mx = 0;
        for (int i = 0; i < n ; i++){
            long long val;
            cin >> val;
            mn = min(mn,val);
            mx = max(mx,val);
            if (val == x) f = 1;
        }
        if (f) cout << "Yes\n";
        else if (x < mx && x > mn) cout << "No\n";
        else cout << "Yes\n";
    }

    return 0;
}