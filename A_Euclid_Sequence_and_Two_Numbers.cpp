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

        if (n == 2){
            cout << max(v[0],v[1]) << " " << min(v[0],v[1]) << endl;
            continue;
        }
        sort(v.rbegin(),v.rend());
        bool f = 1;
        for (int i = 0;i < n-2; i++){
            if(v[i] % v[i+1] != v[i+2]){
                f = 0;
                break;
            }
        }
        if(f) cout << v[0] << " " << v[1] << endl;
        else cout << -1 << endl;
    }

    return 0;
}