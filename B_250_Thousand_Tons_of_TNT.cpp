#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n),pfx(n+1);
        pfx[0] = 0;
        long long s = 0;

        for (int i = 0; i <n; i++){
            cin >> v[i];
            s += v[i];
            pfx[i+1] = s;
        }

        long long ans = 0;

        for (int i = 1; i <= n; i++){
            long long mn = 1e18, mx = 0;
            long long ps = 0;
            if( n % i == 0){
                for (int j = i; j <= n; j += i){
                    long long tar = abs(pfx[j] - ps);
                    ps = pfx[j];
                    mn = min(mn,tar);
                    mx = max(mx,tar);
                }
                ans = max(ans,abs(mx-mn));
            }
        }

        cout << ans << endl;

        // for (long long vl : pfx){
        //     cout << vl << " ";
        // }
    }

    return 0;
}