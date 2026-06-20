#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,p; cin >> n >> p;

        vector <int> v(n), vv(n);

        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> vv[i];

        vector <pair<int,int>>vp(n);
        for (int i = 0; i < n; i++) vp[i] = {vv[i],v[i]};
        sort(vp.begin(),vp.end());
        int cnt = 1;
        long long cst = p;

        for (int i = 0; i < n && cnt < n; i ++){
            if (vp[i].first >= p) break;
            cst += 1ll * min(n - cnt, vp[i].second) * vp[i].first;
            cnt += min(n - cnt, vp[i].second);
        }
        if (cnt < n){
            cst += 1ll * (n - cnt) * p;
        } 
        cout << cst << endl;
    }

    return 0;
}