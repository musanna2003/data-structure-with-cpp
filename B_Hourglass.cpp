#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long s,k,m;
        cin >> s >> k >> m;
        long long time = m / k;
        long long ans = k - (m%k);
        if (s < k){
            cout << (s-(m%k) >= 0? s-(m%k) : 0) << endl;
            continue;
        }
        if (time % 2 == 0){
            cout << (ans + (s-k) >=0 ?ans + (s-k) :0) << endl;
        }
        else {
            cout << ans << endl;
        }
    }

    return 0;
}