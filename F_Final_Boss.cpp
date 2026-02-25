#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long h,n; cin >> h >> n;
        vector <long long> v(n),c(n);
        for (int i = 0; i < n; i ++){
            cin >> v[i];
        }
        for (int i = 0; i < n; i ++){
            cin >> c[i];
        }

        long long l = 1, r = 10e12;
        long long ans ;
        auto ok = [&](long long x){
            long long s = 0;

            for (int i = 0; i < n; i++){
                long long times = (x - 1) / c[i] + 1;
                if (times > (h / v[i])) return true;
                s += times * v[i];
                if (s >= h) return true;
            }
            return false;
        };

        while (l <= r){
            long long mid = (l+r)/2;
            if(ok(mid)){
                r = mid -1;
                ans = mid;
            }
            else{
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}