#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,a,b,k; cin >> n >> a >> b >> k;
        if (n <= 3) cout << 1 << endl;
        else cout << k + min(max(a,b) - min(a,b),n+ min(a,b) - max(a,b)) << endl;
    }

    return 0;
}