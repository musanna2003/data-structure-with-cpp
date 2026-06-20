#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,l,r; cin >> n >> l >> r;
        vector <long long> v;
        bool f = 1;
        for (long long i = 1; i <= n; i++){
            long long x = 1ll * (r/i) * i;
            if (x < l) {
                f = 0;
                break;
            }
            v.push_back(x);
        }
        if (!f) cout << "NO" << endl;
        else{
            cout << "YES" <<endl;
            for (auto it : v) cout << it << " ";
            cout << endl;
        }
        
    }

    return 0;
}