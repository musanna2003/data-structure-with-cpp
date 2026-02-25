#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int ans;
        int mn = INT_MAX,mx=0;
        while (n--){
            int val; cin >> val;
            mx = max(mx,val);
            mn = min (mn,val);
        }
        if ( k >= mn && k <= mx){
            cout << 2 * min(abs(mn-k),abs(mx-k)) + max(abs(mn-k),abs(mx-k)) << endl;
        }
        else if (k > mx){
            cout << k - mn << endl;
        }
        else{
            cout << mx - k << endl;
        }
    }

    return 0;
}