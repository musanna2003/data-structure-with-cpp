#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n),dp(n+1,INT_MAX);
        
        for (int i = 0 ; i < n; i++){
            cin >> v[i];
            dp[v[i]] = 1;
        }

        for (int i = 1; i <= n; i++){
            for (int j = i; j <= n; j += i){
                dp[j] = min(dp[j],dp[j/i] + dp[i]);
            }
        }
        for (int i = 1 ; i <= n; i++){
            if (dp[i] >= INT_MAX) cout << -1 << " ";
            else cout << dp[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
