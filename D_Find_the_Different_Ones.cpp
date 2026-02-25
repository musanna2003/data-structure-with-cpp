#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n),dp(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        dp[0] = -1;
        int pi = -1;
        for (int i = 1; i < n ; i++){
            if (v[i-1] != v[i]) {
                dp[i] = i;
                pi = i;
            }
            else{
                dp[i] = pi;
            }
        }
        int q; cin >> q;
        while (q--){
            int l,r; cin >> l >> r;
            if (dp[r-1] == -1 || dp[r-1] < l) cout << -1 << " " << -1 << endl;
            else cout << dp[r-1] << " " << r << endl;
        }
    }

    return 0;
}