#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long mn = LONG_LONG_MAX;
        vector <long long> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
            mn = min(mn,v[i]);
        }
        vector <long long> tm;
        tm.push_back(1);
        tm.push_back(2);

        while (mn > 2){
            tm.push_back(mn);
            if(mn % 2 == 1) mn ++;
            else mn /= 2;            
        }

        long long ans = LONG_LONG_MAX;

        for (auto it : tm){
            long long cnt = 0;
            bool f = 1;
            for (int i = 0; i< n; i++){
                long long cntt = 0,tt = v[i];
                while (tt > it || tt + 1 == it){
                    cntt ++;
                    if(tt % 2 == 1) tt ++;
                    else tt /= 2; 
                    if (tt == it) break;          
                }
                if(tt == it) cnt += cntt;
                else {
                    f = 0;
                    break;
                }
            }
            if (f == 1) ans = min(ans,cnt);
        }
        cout << ans << endl;
    }

    return 0;
}