#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(),v.rend());
        vector <long long> pf(n);
        long long sm = 0;
        for (int i = 0; i < n; i++){
            sm += v[i];
            pf[i] = sm;
        }
        while(m--){
            long long q; cin >> q;
            auto lb = lower_bound(pf.begin(),pf.end(),q);

            if (lb == pf.end()){
                cout << -1 << endl;
                continue;
            }

            cout << lb - pf.begin() + 1 << endl;
        }
    }

    return 0;
}