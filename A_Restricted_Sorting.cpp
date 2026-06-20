#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long mn = LONG_LONG_MAX, mx = 0;
        vector <long long> v(n),vv,vt;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            mn = min(mn,v[i]), mx = max(mx,v[i]);
        }
        if (is_sorted(v.begin(),v.end()) && v.front() <= v.back()){
            cout << -1 << endl;
            continue;
        }
        vv = v;
        sort (vv.begin(),vv.end());
        long long ans = INT_MAX;
        for (int i = 0;i < n; i++){
            if(v[i] != vv[i]) ans = min(ans,max(v[i] - mn,mx - v[i]));
        }
        cout << ans << endl;
    }

    return 0;
}