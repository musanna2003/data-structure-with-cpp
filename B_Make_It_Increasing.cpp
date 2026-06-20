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
        if (n == 1){
            cout << 0 << endl;
            continue;
        }
        int  cnt = 0;
        bool f = 0;
        for (int i = n-2; i >= 0; i--){
            if (v[i] >= v[i+1]){
                while (v[i] >= v[i+1] ){
                    cnt ++;
                    v[i] = v[i]/2;
                    // cout << v[i] << ' ';
                    if (v[i] == 0) break;
                }
            }
            if (v[i] == 0 && v[i + 1] == 0) {
                f = 1;
                break;
            }
        }

        if (f) cout << -1 << endl;
        else cout << cnt << endl;
    }

    return 0;
}