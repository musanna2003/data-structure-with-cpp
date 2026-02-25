#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    return __gcd(a,b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        for (int i = 0; i < n ; i++){
            cin >> v[i];
        }

        long long g1 = v[0];
        long long g2 = v[1];

        for (int i = 0; i < n; i++){
            if ( i % 2 == 0){
                g1 = gcd(g1,v[i]);
            }
            else{
                g2 = gcd(g2,v[i]);
            }
        }
        bool f1 = 0, f2 = 0;
        for (int i = 0; i < n; i++){
            if ( i % 2 == 0 && g2 != 1){
                if (v[i]%g2 == 0) f2 = 1;
            }
            else if (i % 2 == 1 && g1 != 1){
                if (v[i]%g1 == 0) f1 = 1;
            }
        }

        if ( !f1 && g1 != 1) cout << g1 << endl;
        else if (!f2 && g2 != 1) cout << g2 << endl;
        else cout << 0 << endl;

    }

    return 0;
}