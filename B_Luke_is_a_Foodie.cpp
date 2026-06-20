#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,x; cin >> n >> x;
        vector <long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];


        int cnt = 0;
        long long mn = v[0], mx = v[0];

        for (int i = 1; i < n; i++){
            mn = min(mn,v[i]);
            mx = max(mx,v[i]);
            long long m = (mn + mx) / 2;
            if (abs(m - mn) > x || abs(m - mx) > x){
                cnt ++;
                mn= v[i], mx = v[i];
            }
        }
        cout << cnt << endl;
        // cout << cnt << endl;
    }

    return 0;
}