#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];

        bool f = 1;
        for (int i = 0; i < n/2; i ++){
            if (v[i] != v[n-1-i]) f = 0;
        }

        if(f){
            cout << 0 << endl;
            continue;
        }

        long long ans = 0;
        for (int i = 0; i < n/2; i ++){
            ans = gcd(ans,abs(v[i]-v[n-1-i]));
        }
        cout << ans << endl;
    }

    return 0;
}