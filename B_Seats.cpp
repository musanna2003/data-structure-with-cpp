#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int c1 = 0,c0 = 0,cnt = 0;
        for (auto it : s){
            if (it == '0') c0++;
            else c1 ++;
        }
        if (n <= 2){
            cout << 1 << endl;
            continue;
        }
        if (n == 3){
            if (c0 == 3 || s[1] == '1') cout << 1 << endl;
            else cout << 2 << endl;
            continue;
        }
        int ans = 0;
        if (c0 == n){
            if (n == 3) cout << 1 << endl;
            else cout << 2 + (n-4)/3 << endl;
            continue;
        }
        bool f= 1;
        if (s[0] == '1') f = 0;
        for (int i = 0; i < n; i ++){
            if (s[i] == '0') cnt ++;
            if (i == n-1){
                if (s[i] == '1'){
                    if (f){
                        ans ++;
                        cnt -= 2;
                    }

                    ans += cnt/3;
                }
                else{
                    if (cnt > 1) ans += 1 + max(0,cnt-2)/3;
                }
                continue;
            }
            if (s[i] == '1') {
                if (f){
                    if (cnt > 1) ans += 1 + (max(0,cnt-2))/3;
                    f = 0;
                    cnt = 0;
                    continue;
                }
                ans += cnt/3;
                cnt = 0;
            }
        }
        
        cout << ans + c1  << endl;
    }

    return 0;
}