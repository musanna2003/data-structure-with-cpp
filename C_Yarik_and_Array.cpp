#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i< n ; i++){
            cin>> v[i];
        }
        long long ans = INT_MIN;
        long long s = 0;
        int pp = abs((v[0] + 1) % 2);

        for (int i = 0; i < n; i++){
            if (pp != abs(v[i]%2)){
                s += v[i];
            }
            else {
                s = 0;
                s += v[i];
            }
            ans = max(ans,s);
            if (s < 0) s = 0;
            pp = abs(v[i]%2);
        }
        cout << ans << endl;
    }

    return 0;
}