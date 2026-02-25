#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k,q;
        cin >> n >> q >> k;
        vector <long long> v(n);

        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        long long ans = 0;
        int j = 0;
        for (int i = 0; i < n; i++){
            if ( i == n-1 && v[i] <= k || v[i] <= k && v[i+1] >k ){
                int s = i - j + 1;
                if (s >= q){
                    long long num = s - q + 1 ;
                    ans += (num*(num+1))/2 ;
                }
            }
            else if (v[i] > k) j = i+1;
        }

        cout << ans << endl;

    }

    return 0;
}