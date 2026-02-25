#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        vector <int> a(n),b(n), pfx;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
    
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        for (int i = 0; i < n; i++){
            a[i] = max(a[i],b[i]);
        }

        for (int i = n-2; i >= 0; i--){
            a[i] = max(a[i],a[i+1]);
        }
        long long s = 0;
        pfx.push_back(0);
        for (int i = 0; i < n; i++){
            s += a[i];
            pfx.push_back(s);
        }

        while (q --){
            int l,r; cin >> l >> r;
            cout << pfx[r] - pfx[l-1] << ' ';
        }
        cout << endl;
    }
    return 0;
}