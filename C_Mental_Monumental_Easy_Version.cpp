#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        map <long long,int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]] ++;
        }

        long long l = 0,r = n-1;
        auto ok = [&](long long x){
            map<long long,int> mpt = mp;

            while (x >= 0) {
                long long xx = (2 * x) + 1;

                auto it2 = mpt.find(x);
                if (it2 != mpt.end()) {
                    it2->second--;
                    if (it2->second == 0) mpt.erase(it2);
                    x--;
                } 
                else {
                    auto it = mpt.lower_bound(xx);

                    if (it != mpt.end()) {
                        it->second--;
                        if (it->second == 0) mpt.erase(it);
                        x--;
                    } 
                    else return false;
                }
            }
            return true;
        };
        long long ans = 0;
        while (l <= r){
            long long m = (l+r)/2;
            if(ok(m)){
                ans = m;
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
        cout << ans+1 << endl;
    }

    return 0;
}