#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long sm = 0;
        vector <long long> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
            sm += v[i];
            
        }

        long long ans = 0;
        long long smt = 0;
        for (int i = 0; i < n-1; i ++){
            smt+= v[i];
            ans = max(ans,gcd(smt,sm-smt));
        }
        cout << ans << endl;
    }

    return 0;
}