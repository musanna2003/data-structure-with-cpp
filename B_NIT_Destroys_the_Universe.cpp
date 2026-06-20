#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int ans = 0; int cnt = 0;
        for (int i = 0; i < n; i++){
            
            if (v[i] == 0 || i == n-1){
                if (i ==n-1 && v[i] > 0) cnt ++;
                if (cnt > 0) ans ++;
                cnt = 0;
            }
            else cnt ++;
        }
        if (ans > 2) ans = 2;
        cout << ans << endl;
    }

    return 0;
}