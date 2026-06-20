#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
        vector <double> v(n);
        double sm = 0.0;
        double mx = 0.0;
        double d = hypot(x1 - x2, y1 - y2);

        for (int i = 0; i < n;i ++) {
            cin >> v[i];
            sm += v[i];
            mx = max(mx,v[i]);
        }

        if ( d >= max(0.0,2*mx - sm) && d <= sm) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}