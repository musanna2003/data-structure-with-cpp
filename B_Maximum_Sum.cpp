#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <long long> v(n);

        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        vector <long long> pfx(n+1,0);
        for (int i = 0; i <n; i++){
            pfx[i+1] = pfx[i] + v[i];
        }

        int l = 1,r=n-k;
        long long ans = 0;

        while(r<=n){
            ans = max(ans,pfx[r]-pfx[l-1]);
            l += 2;
            r ++;
        }

        cout << ans << endl;

    }

    return 0;
}