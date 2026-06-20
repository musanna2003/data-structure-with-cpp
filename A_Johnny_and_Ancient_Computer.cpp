#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b; cin >> a >>b;

        int cnt = 0;

        long long ta = a, tb = b;

        while (ta && !(ta & 1)) {
            ta >>= 1;
            cnt++;
        }

        while (tb && !(tb & 1)) {
            tb >>= 1;
            cnt--;
        }
        cnt = abs(cnt);
        // cout << "ta = " << ta << ", tb = " << tb << endl;
        if (ta != tb) cout << -1 << endl;
        else cout << cnt/3 + cnt%3/2 + cnt%3%2 << endl;
    }

    return 0;
}