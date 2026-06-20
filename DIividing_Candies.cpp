#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <int> v(n);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % k == 0) ans = max(ans,v[i]);
        }
        cout << ans << endl;
    }

    return 0;
}