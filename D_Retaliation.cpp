#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);

        for (int i =0; i < n; i++){
            cin >> v[i];
        }
        long long xr = (v[0]*(1-n) + (n * v[1]))/(n+1);
        long long yr = ((2 * v[0]) - v[1])/(n+1);
        bool f = 1;
        for (long long i = 0,j = 1; i < n; i++,j++){
            if ((xr * j) + (yr * (n-j+1)) != v[i]){
                f = 0;
                break;
            }
            
        }
        if ( xr < 0 || yr < 0){
            cout << "NO\n";
        }
        else cout << (f ? "YES" : "NO") << endl;
        // cout << xr << " " << yr << endl;
    }

    return 0;
}