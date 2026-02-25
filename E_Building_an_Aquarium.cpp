#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long x; cin >> x;

        vector < long long> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        long long ht;
        long long l = 1, h = 10e12;
        auto ok = [&](long long m){
            long long a = 0;
            for (auto it : v){
                if (it < m) a += m-it;
            }
            return a <= x;
        };
        while (l <= h){
            long long mid = (l+h)/2;
            if (ok(mid)){
                ht = mid;
                l = mid + 1;
            }
            else {
                h = mid -1;
            }
        }
        cout << ht << endl;
    }
    return 0;
}