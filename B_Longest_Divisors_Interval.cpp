#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        if (n% 2 == 1) {
            cout << 1 << endl;
            continue;
        }
        int i;
        for (i = 1; i*i < n; i++){
            if (n % i != 0) break;
        }

        cout << i - 1 << endl;
    }

    return 0;
}