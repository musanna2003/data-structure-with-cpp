#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        cout << (__builtin_popcountll(n) == 1? "NO" : "YES") << endl;
    }

    return 0;
}