#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        vector <long long> v(n);
        long long mx = 0, idx;
        for (int i = 0 ; i < n; i++){
            cin >> v[i];
            if (v[i] > mx){
                mx = v[i];
                idx = i;
            }
        }
        long long ans = 0;
        for (int i = 0 ; i < n; i++){
            if (i == idx) continue;
            long long ref = v[i];
            while(ref < mx){
                ref = ref*2;
            }
            if (ref >mx) ref /= 2;

            ans = max(mx-ref,ans);
        }
        cout << ans << endl;
    }

    return 0;
}