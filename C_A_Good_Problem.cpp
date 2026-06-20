#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,l,r,k; cin >> n >> l >> r >> k;

        long long mba = 0, mbb = 0;

        for (int i = 0; i < 64; i ++){
            if (l & (1ll << i)) mba = 1ll << i; 
            if (r & (1ll << i)) mbb = 1ll << i; 
        }

        if (n % 2 == 1){
            cout << l << endl;
            continue;
        }

        if(n == 2 || mba == mbb) {
            cout << -1 << endl;
        }

        else {
            if (k > n-2) cout << (mba << 1) << endl;
            else cout << l << endl;
        }

    }

    return 0;
}