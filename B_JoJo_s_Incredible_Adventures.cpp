#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        bool f0 = 1;
        for (auto it : s){
            if (it == '0') f0 = 0;
        }
        if (f0){
            cout << 1ll*n*n << endl;
            continue;
        }

        s += s;
        int ln = 0;
        int cnt = 0;
        for (int i = 0; i < n*2; i++){
            if(s[i] == '0'){
                ln = max(ln,cnt);
                cnt = 0;
            }
            else{
                cnt++;
            }
        }
        ln = max(ln,cnt);

        ln ++;
        long long ans = 1ll*(ln/2)*((ln+1)/2);
        cout << ans << endl;
    }

    return 0;
}