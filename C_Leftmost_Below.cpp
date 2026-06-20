#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string ans = "YES";
        long long mn = 1e12;
        for (int i = 0; i < n; i++){
            long long val; cin >> val;
            if (val > mn) ans = "NO";
            mn = min(mn,(2*val - 1));
            // cout << mn << " ";
        }
        cout << ans << endl;
    }

    return 0;
}