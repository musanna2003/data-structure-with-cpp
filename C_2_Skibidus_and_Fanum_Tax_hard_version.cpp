#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <long long> v(n),vv(m);

        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < m; i++) cin >> vv[i];
        sort (vv.begin(),vv.end());
        v[0] = min(v[0],vv[0] - v[0]);
        string ans = "YES";
        for (int i = 1; i < n; i++){
            long long best = 1e10;
            if(v[i] >= v[i-1]) best = v[i];
            auto lb = lower_bound(vv.begin(), vv.end(), v[i-1] + v[i]);
            if(lb != vv.end())
                best = min(best, *lb - v[i]);
            if(best == 1e10) {
                ans = "NO";
                break;
            }
            v[i] = best;
        }

        cout << ans << endl;
    }

    return 0;
}