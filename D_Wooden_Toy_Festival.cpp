#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v;
        map <long long,int> mp;

        for (int i= 0; i< n; i ++){
            long long val; cin >> val;
            if (!mp.count(val)) v.push_back(val);
            mp[val] ++;
        }

        if (mp.size() <= 3) {
            cout << 0 << endl;
            continue;
        }

        sort (v.begin(),v.end());
        n = v.size();
        int l = 0, r = n-1;
        long long ans = LONG_MAX;

        while (l <= r){
            long long a = v[l] - ((v[l]+v[0]) / 2);
            long long b = v[r-1] - ((v[r-1] + v[l+1]) / 2);
            long long c = v[n-1] - ((v[r] + v[n-1]) / 2);
            ans = min(ans,max(a,max(b,c)));
            long long x = v[l+1] - ((v[0] + v[l+1])/2);
            long long y = v[n-1] - ((v[r-1] + v[n-1])/2);

            if (x < y) l ++;
            else r --;
        }

        cout << ans << endl;

    }

    return 0;
}