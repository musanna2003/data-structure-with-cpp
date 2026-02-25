#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,q; cin >> n >> q;
        vector <long long> v(n);

        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        vector <long long> pfx;
        pfx.push_back(0);
        long long s = 0;
        for (int a : v){
            s += a;
            pfx.push_back(s);
        }
        while (q--){
            int  l,r,k; cin >> l >> r >> k;
            cout << ((pfx.back() - (pfx[r] - pfx[l-1]) + (k*(r-l+1))) % 2 == 0? "NO":"YES") << endl;
        }
    }

    return 0;
}