#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long ans = 0;
        while (n--){
            long long val; cin >> val;
            ans ^= val;
        }
        cout << ans  << endl;
    }

    return 0;
}