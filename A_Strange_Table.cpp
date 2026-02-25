#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,m,k; cin >> n >> m >> k;
        long long c = (k+n-1)/n;
        long long r = k % n;
        if (r == 0) r = n;
        cout << (r - 1)*m + c << endl;
    }

    return 0;
}