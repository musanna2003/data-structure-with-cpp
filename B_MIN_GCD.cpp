#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long mn = LONG_LONG_MAX;
        vector <long long> v(n),v2;
        
        for (int i = 0; i <n; i++){
            cin >> v[i];
            mn = min(mn,v[i]);
        }
        int mnc = 0;
        for (int i = 0; i <n; i++){
            if (v[i] == mn) mnc ++;
        }

        if (mnc > 1) {
            cout << "Yes\n";
            continue;
        }

        int cnt = 0;
        

        for (int i = 0; i <n; i++){
            if (__gcd(mn,v[i]) == mn) {
                cnt ++;
                if (v[i] != mn) v2.push_back(v[i]);
            }
        }
        if (v2.empty()) {
            cout << "No\n";
            continue;
        }
        long long t_gcd = v2[0];
        for (long long vl : v2){
            t_gcd = __gcd(t_gcd,vl);
        }
        if (t_gcd == mn && cnt > 2) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}