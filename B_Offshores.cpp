#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,x,y; cin >> n >> x >> y;
        vector <long long> v(n),vt(n),pf(n+2);
        for (int i = 0; i < n; i ++) {
            cin >> v[i];
            vt[i] = (v[i]/x) * y;
        }
        pf[0] = 0;
        for (int i = 0; i < n; i++){
            pf[i+1] = pf[i] + vt[i];
        }
        pf[n+1] = pf[n]; 

        long long ans = 0;

        for (int i = 1; i<= n; i++){
            long long na = v[i-1] + pf[i-1] + pf.back() - pf[i];
            ans = max(ans,na);
        }
        cout << ans << endl;
    }

    return 0;
}