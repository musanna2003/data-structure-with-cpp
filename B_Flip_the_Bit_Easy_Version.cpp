#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        int p; cin >> p;

        p --;
        int cf = 0, cb = 0;
        for (int i = p; i < n-1; i ++){
            if (v[i] == v[p] && v[i+1] != v[p]) cf ++;
        }
        for (int i = p; i > 0; i--){
            if (v[i] == v[p] && v[i-1] != v[p]) cb ++;
        }

        cout << 2 * max(cf,cb) << endl;
    }

    return 0;
}