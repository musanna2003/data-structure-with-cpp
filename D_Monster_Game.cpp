#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> a(n),b(n);
        long long ans = 0;
        for (int i= 0; i < n; i++) cin >> a[i];
        long long sm = 0;  
        for (int i= 0; i < n; i++) {
            long long val; cin >> val;
            sm += val;
            b[i] = sm;
        }
        sort(a.begin(),a.end());
        long long j = 0;
        for (int i = n-1; i >=0; i--){
            if (b[j] <= n - i){
                j ++;
            }
            ans = max(ans,j*a[i]);
        }
        cout << ans << endl;
    }

    return 0;
}