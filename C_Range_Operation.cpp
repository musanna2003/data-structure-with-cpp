#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> v;
        int ps = 0;
        for ( int i = 0; i < n; i++){
            int val;
            cin >> val;
            ps += val;
            v.push_back(val);
        }
        
        vector <int> sm;

        int sl = 0;
        int l = 2;
        int r = n;
        for ( int i = 0; i < n; i++){
            sl += v[i];
            sm.push_back(sl+((l+r)*(r-l+1)));
            l++;
        }

        
        int sr = 0;
        l = 1;
        r = n-1;
        for ( int i = n-1; i <= 0; i--){
            sr += v[i];
            sm.push_back(sr+((l+r)*(r-l+1)));
            r--;
        }

        sm.push_back((n+1 * n));
        int ans = 0;
        for ( int i = 0; i < sm.size(); i++){
            ans = max(ans,sm[i]);
            cout << sm[i] << " ";
        }
        
        cout << ans << endl;
    }
}