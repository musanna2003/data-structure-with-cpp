#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,m; cin >> n >> m;
        int bit = 0;
        long long tm = max(n,m);
        if (n == m) {
            cout << 0 << endl;
            continue;
        }
        while (tm > 0){
            bit ++;
            tm /= 2;  
        }

        vector <int> a(bit),b(bit);
        int c = 0;
        for (int i = bit -1,j = 0; i >= 0 ; i --,j ++){
            a[i] = n >> j & 1;
            b[i] = m >> j & 1;
            if (a[i] != b[i]) c++;
        }

        if (a[0] < b[0]) {
            cout << -1 << endl;
            continue;
        }

        cout << c << endl;
        
        for (int i = bit -1,j = 0; i >= 0 ; i --,j++){
            long long x = 1;
            for (int k = 0;  k < j; k++ ){
                x *= 2;
            }
            if (a[i] != b[i]) cout << x << " ";
        }
        cout << endl;
        

        // for (auto it : a) cout << it << " " ;
        // cout << endl;
        // for (auto it : b) cout << it << " " ;
        // cout << endl;
        
    }

    return 0;
}