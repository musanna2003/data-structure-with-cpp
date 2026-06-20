#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <int,int> mp;
        int mx = 0, mn = INT_MAX;
        for (int i = 0; i < n; i++){
            int val; cin >> val;
            mp[val] ++;
            mn = min(val,mn); mx = max(mx,val);
        }
        if (mn == mx) mx = 0;
        cout << n - mp[mn] - mp[mx] << endl;
    }

    return 0;
}