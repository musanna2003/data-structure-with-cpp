#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <long long> v(n),v2(n);
        for (int  i = 0 ; i <n; i++){
            cin >> v[i];
        }
        v2 = v;
        sort(v.begin(),v.end());
        vector <long long> dp(n);
        int l = 0;
        long long s = 0;
        for (int r = 0; r < n; r ++){
            if (r == n-1){
                if (s < v[r]){
                    for (int j = l; j < r; j ++){
                        dp[j] = r-1;
                        l = r;
                    }
                    dp[r] = r;
                }
                else {
                    for (int j = l; j <= r; j ++){
                        dp[j] = r;
                    }
                }
            }
            else if (s < v[r] ){
                for (int j = l; j < r; j ++){
                    dp[j] = r-1;
                    l = r;
                }
            }
            s += v[r];
        }

        map <long long , int> mp;
        for (int i = 0; i< n; i++){
            mp[v[i]] = dp[i];
        }

        for (auto vl : v2){
            cout << mp[vl] << " ";
        }
        cout << endl;
    }

    return 0;
}