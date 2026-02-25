#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n),d(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        for (int i = 0; i < n; i++){
            if (i == n-1) d[i] = LONG_LONG_MAX - v[i];
            else d[i] = v[i+1] - v[i];
        }

        long long h = d[0], l = 0;

        int ans = 0;
        for (int i = 1; i < n; i++){
            long long nh = d[i-1]-l;
            long long nl = d[i-1]-h;

            if (nl >= d[i]){
                nl = 0;
            }
            else {
                ans ++;
            }
            h = min(nh,d[i]); l = nl;
        }

        cout << ans << endl;

    }

    return 0;
}