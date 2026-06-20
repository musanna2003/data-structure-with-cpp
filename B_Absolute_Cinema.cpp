#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> a(n),b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        for (int i = 0; i < n; i++){
            if (a[i] > b[i]) swap(a[i],b[i]);
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) ans+= b[i];
        long long mx = 0;
        for (int i = 0; i < n; i++) mx = max(mx,a[i]);

        cout << ans + mx << endl;
    }

    return 0;
}