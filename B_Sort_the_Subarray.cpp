#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n),vv(n);
        for (int i = 0; i <n; i++) cin >> v[i];
        for (int i = 0; i <n; i++) cin >> vv[i];

        int l = 0,r= n-1;

        for (int i = 0; i < n; i++){
            if (v[i] != vv[i]){
                l = i;
                break;
            }
        }

        for (int i = n-1; i >=0; i--){
            if (v[i] != vv[i]){
                r = i;
                break;
            }
        }

        while(l > 0 && vv[l-1] <= vv[l] ) l--;
        while(r<n-1 && vv[r+1] >= vv[r] ) r++;

        cout << l+1 << " " << r+1 << endl;
    }

    return 0;
}