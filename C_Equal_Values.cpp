#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i< n; i ++) cin >> v[i];
        long long ans = 1e18;

        for (int i = 0; i < n; i++){
            long long l = 1ll * i * v[i];
            while (i < n-1 && v[i] == v[i+1]) i ++;
            long long r = 1ll * (n-i-1) * v[i];
            ans = min(ans,r+l);
        }
        cout << ans << endl;
    }

    return 0;
}