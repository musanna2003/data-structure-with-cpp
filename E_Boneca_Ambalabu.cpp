#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n), bit(31);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            for (int j = 0; j < 31; j++){
                if (v[i] & (1LL << j)) {
                    bit[j]++;
                }
            }
        }
        
        long long ans = 0;

        for (int i = 0; i< n; i++){
            long long ta = 0;
            for (int j = 0; j < 31; j++){
                if((v[i] >> j) & 1){
                    ta += (1ll << j) * (n - bit[j]);
                }
                else{
                    ta += (1ll << j) * (bit[j]);
                }
            }
            ans = max(ans,ta);
        }
        cout << ans << endl;
    }

    return 0;
}