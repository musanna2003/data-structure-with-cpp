#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long m = 1e9+7;
        cout << ((((n *(n + 1)) % m) * (4 * n - 1)) % m*337) % m << endl;
    }

    return 0;
}