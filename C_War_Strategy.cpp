#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,m,k; cin >> n >> m >> k;

        long long ms = max(n-k,k-1);

        long long l = 0, h = ms;
        long long ans = 0;

        auto ok = [&](long long x){
            return (x + min(x,n-ms-1) + max(x , min(x,n-ms-1)) - 1) <= m;
        };
        while (l <= h){
            long long mid = (l+h)/2;
            if (ok(mid)){
                l = mid + 1;
                ans = mid + 1 + min(mid,n-ms-1);
            }
            else {
                h = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}