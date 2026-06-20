#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n),vv;
        for (int i = 0; i < n; i++) cin >> v[i];
        int ans = 1e7;

        for (int i = 0; i< n-1; i++){
            if (abs(v[i] - v[i+1]) <= 1) ans = 0;
        }
        if (ans == 0){
            cout << 0 << endl;
            continue;
        }
        vv = v;
        sort(vv.begin(),vv.end());
        if (vv == v) {
            cout << -1 << endl;
            continue;
        }

        reverse(vv.rbegin(),vv.rend());
        if (vv == v) {
            cout << -1 << endl;
            continue;
        }
        cout << 1 << endl;
    }

    return 0;

}