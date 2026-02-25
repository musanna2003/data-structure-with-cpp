#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n , k ; cin >> n >> k;
        vector <int> v(n);
        int sm = 0;
        for ( int i = 0; i < n; i++){
            cin >> v[i];
            sm += v[i];
        }

        if (sm < k){
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        int l = 0, r = 0;
        int s = 0;
        while (r < n+1){
            if (s > k){
                ans = max(ans,r-l - 1);
                // cout << l << " " << r << endl;
                s -= v[l];
                l ++;
                
            }
            else{
                s += v[r];
                if (r == n-1 && s <= k){
                    ans = max(ans,r-l+1);
                }
                r++;
            }
            
        }
        
        cout << n - ans  << endl;
    }

    return 0;
}