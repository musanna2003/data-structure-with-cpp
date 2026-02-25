#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int l,r; cin >> l >> r;
        
        int tl = l, dl= 0;
        while (tl > 0){
            tl /= 3;
            dl ++;
        }
        int seed = 3;
        for (int i = 1; i < dl; i++){
            seed *= 3;
        }
        long long ans = dl;
        
        while (1){
            
            ans += (min(r,seed-1) - l + 1)* dl;
            if (r < seed) break;
            l = seed;
            seed *= 3;
            dl ++;
        }
        cout << ans << endl;
    }

    return 0;
}