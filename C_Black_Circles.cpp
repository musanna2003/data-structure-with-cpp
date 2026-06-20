#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> x(n),y(n);
        for (int i = 0; i < n; i++){
            cin >> x[i] >> y[i];
        }

        long long sx,sy,tx,ty; cin >> sx >> sy >> tx >> ty;
        
        long long d =
                (sx - tx) * (sx - tx) +
                (sy - ty) * (sy - ty);

        string ans = "YES";

        for (int i = 0; i < n; i++) {
            long long dd =
                (x[i] - tx) * (x[i] - tx) +
                (y[i] - ty) * (y[i] - ty);

            if (dd <= d) {
                ans = "NO";
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}