#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n>> k;
        long long mn = LONG_LONG_MAX, mx = 0;
        long long sm = 0;
        vector <long long> v(n);
        for (int i= 0; i < n; i++){
            cin >> v[i];
            mx = max(mx,v[i]); mn = min(mn,v[i]);
            sm += v[i];
        }

        int f = 0;
        for (int i= 0; i < n; i++){
            if(v[i] == mx) f ++;
        }
        if(f > 1) f = 0;
        if(mx - mn > k+f){
            cout << "Jerry" << endl;
            continue;
        }

        if(sm%2 == 1) cout << "Tom" << endl;
        else cout << "Jerry" << endl;

    }

    return 0;
}