#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <int> v(n);
        int ec = 0;
        bool f = 0;
        int ans = 0;
        for (int i = 0; i < n; i ++){
            cin >> v[i];
            if (v[i] % 2 == 0) ec ++;
            if (v[i] % k == 0) f = 1;
            ans = max(ans,v[i] % k);
        }

        if (k%2 == 1){
            cout << (f ? 0 : k - ans) << endl;
        }
        else {
            if (k == 2) cout << (f ? 0 : 1) << endl;
            else {
                if (ec > 1 || f) cout << 0 << endl;
                else if (ec == 1) cout << 1 << endl;
                else cout << min(2,k - ans) << endl;
            }
        }
    }

    return 0;
}