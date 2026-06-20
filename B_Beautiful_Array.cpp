#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n, k, b, s; cin >> n >> k >> b >> s;
        if ((b * k) + ((k-1)*n) < s || b*k > s){
            cout << -1 << endl;
            continue;
        }
        cout << min(s, (b * k) + (k-1)) << " ";
        s -= (b * k) + (k-1);
        for (int i = 1; i < n; i++){
            if (s < 0) {
                cout << 0 << " ";
            }
            else {
                cout << min(s,k-1) << " ";
                s -= k-1 ;
            }
            
        }
        cout << endl;
    }

    return 0;
}