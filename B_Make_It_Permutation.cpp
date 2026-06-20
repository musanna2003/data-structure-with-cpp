#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << 2 * n << endl;
        for (int i = 0; i < n; i ++){
            cout << i + 1 << " " << 1 << " " << i + 1 << endl;
            cout << i + 1 << " " << min(n,i+2) << " " << n << endl;
        }
    }

    return 0;
}