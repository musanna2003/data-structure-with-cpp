#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        vector <long long> a(n);
        vector <long long> b(n);
        
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        long long mn = 0,mx = 0;

        for (int i = 0; i < n; i++){
            long long tmx = max(mx - a[i], b[i] - mn);
            long long tmn = min(mn - a[i], b[i] - mx);
            mx = tmx, mn = tmn;
        }

        cout << mx<< endl;
    }


    return 0;
}