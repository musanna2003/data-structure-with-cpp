#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long x,y,k; cin >> x >> y >> k;
        long long ts = k - 1 + (y*k);
        long long gn = x - 1;
        cout << ((ts+gn-1)/gn) + k << endl;
    }

    return 0;
}