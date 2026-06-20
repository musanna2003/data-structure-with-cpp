#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n),vv(n);

        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> vv[i];

        sort(v.begin(),v.end());
        sort(vv.begin(),vv.end());
        long long md = 1e9 + 7;
        int j = 0;
        long long ans = 1;
        for (int i = 0; i < n; i++){
            while(j < n && v[i]  > vv[j]) j ++;
            ans = ((ans * (j-i))) % md;
        }
        cout << ans << endl;
    }

    return 0;
}