#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <long long> a(n),b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        int ans = 0;
        int s = 0,l = 0; 
        for (int r = 0; r < n; r++){
            if (r > 0 && b[r-1]%b[r] != 0){
                s = 0;
                l = r;
            } 
            s += a[r];
            while (s > k){
                s -= a[l];
                l ++;
            }
            ans = max (ans, r-l+1);
        }
        cout << ans << endl;
    }


    return 0;
}