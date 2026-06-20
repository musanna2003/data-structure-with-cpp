#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long x,y; cin >> x >> y;
        cout << (x*2 == y? "NO" : "YES") << endl;
    }

    return 0;
}