#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        bool f = 0; 
        int l = 0;
        for ( int i = 0; i < n; i++){
            if (s[i] == 'B') f = 1;
            if (f){
                l ++;
            }
            if(l >= k || i == n -1 ){
                if (f) ans ++;
                l = 0;
                f = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}