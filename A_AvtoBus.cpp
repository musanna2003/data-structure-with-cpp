#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;

        if (n%2 == 1 || n < 4) cout << -1 << endl;
        else cout << (n + 5) / 6 << " " << n/4 << endl;
    }

    return 0;
}