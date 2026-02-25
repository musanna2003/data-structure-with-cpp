#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <int> a(n),b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < n; i++){
            int val; cin >> val;
            if (i == 0){ b[i] = val;continue;}
            b[i] = max(b[i-1],val);
        }
        long long ans = a[0];
        long long sm = 0;
        int kn = min(k,n);
        for (int i = 0; i < kn; i++){
            sm = sm + a[i];
            ans = max(ans,(sm + (k-1-i) * b[i]));
        }
        cout << ans << endl;
    }

    return 0;
}