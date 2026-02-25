#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        long long d = (k+(n-2))/(n-1);
        // cout << (d*n) - ((n-1)*d - k) << endl;
        cout << ((d*n)-1) - ((n-1)*d - k) << endl;
    }

    return 0;
}