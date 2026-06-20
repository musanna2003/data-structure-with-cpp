#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <int> v(n+2);
        v[0] = 0;v[1] = 1; v[2] = 2;
        for (int i = 3; i <= n+1; i++){
            v[i] = v[i-1] + v[i-2];
        }
        // for (auto i : v) cout << i << " ";
        while (m--){
            int l,h,w; cin >> l >> h >> w;
            if(min(min(l,h),w) >= v[n] && max(max(l,h),w) >= v[n+1] ) cout << '1';
            else cout << '0';
        }
        cout << endl;
    }

    return 0;
}