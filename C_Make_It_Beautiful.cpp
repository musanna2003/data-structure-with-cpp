#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <long long> v(n);
        long long ans = 0;
        for (int j = 0; j < n; j++) {
            cin >> v[j];
            for (int i = 0; i < 62; i++) {
                if (v[j] & (1LL << i)) {
                    ans ++;
                }
            }
        }

        for (int i = 0; i < 62; i++){
            for (auto it : v){
                long long bt = 1ll << i;
                if (!(bt&it) && bt <= k){
                    ans ++;
                    k -= bt;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}