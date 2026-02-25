#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, m, d; cin >> n >> m >> d;
        int load = d/m + 1;
        cout << (n+load-1)/load << endl;
    }

    return 0;
}