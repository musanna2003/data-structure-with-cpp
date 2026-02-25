#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int x,y,n; cin >> x >> y >> n;

        cout << max(0,(x-(y*n))) << endl;
    }

    return 0;
}