#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <long long> v(k);
        for (int i =0; i < k; i ++){
            cin >> v[i];
        }

        sort(v.rbegin(),v.rend());

        long long s = 0;
        long long ans = 0;
        for (int i = 0;i < k; i ++){
            if (s >= v[i]) break;
            s += n - v[i];
            ans ++;
        }

        cout << ans << endl;
    }

    return 0;
}