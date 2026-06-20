#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,c; cin >> n >> c;
        vector <long long> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }


        auto ok = [&](long long a){
            __int128 ar = 0;

            for (int i = 0; i < n; i++){
                __int128 x = (2LL * a) + v[i];
                ar += x * x;
                if (ar > c) return false;
            }
            return ar <= c;
        };
    
        long long l = 0, h = 1e10;
        long long ans = 1;
        while (l <= h){
            long long mid = (l+h)/2;
            if (ok(mid)){
                ans = mid;
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
    
        cout << ans << endl;


    }

    return 0;
}