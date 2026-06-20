#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long mn = 1e10,mx = LONG_LONG_MIN,sm = 0;
        int cn = 0;
        for (int i = 0; i < n; i++){
            long long val; cin >> val;
            if (val < 0){
                mx = max(mx,val);
                cn++;
            }
            else{
                mn = min(mn,val);
            }
            sm += abs(val);
        }
        if(cn%2 == 1) {
            sm -= 2*(min(abs(mx),mn));
        }
        cout << sm << endl;
    }

    return 0;
}