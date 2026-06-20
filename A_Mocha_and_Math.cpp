#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long ans;
        for (int i = 0; i < n; i++){
            long long val; cin >> val;
            if (i == 0) ans = val;
            ans &= val;
        }

        cout << ans << endl;
    }

    return 0;
}