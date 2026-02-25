#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,h,k; cin >> n >> h >> k;
        vector <long long> v(n);
        long long s = 0;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            s += v[i];
        }

        long long ans = 0;

        // while (h > s){
        //     ans += k+n;
        //     h -= s;
        // }

        long long t = (h - 1) / s;
        ans += t * (k + n);
        h -= t * s;
        vector <long long> dp(n);
        long long mx = 0;
        for (int i= n-1; i >= 0; i --){
            dp[i] = mx;
            mx = max(mx,v[i]);
        }
        
        long long mn = LONG_LONG_MAX;
        long long sm = 0;
        for (int i = 0; i < n; i++){
            mn = min(mn,v[i]);
            sm += v[i];
            ans ++;
            if (sm - mn + max(dp[i],mn) >= h) break;
            
        }
        cout << ans << endl;
    }

    return 0;
}