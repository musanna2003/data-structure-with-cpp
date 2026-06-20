#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        long long cnt = 0;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if (v[i] == 1) cnt ++;
        }
        long long ans = 0;
        long long c = 0;
        long long mx = 0;
        for (int i = 0; i < n; i++){
            mx = max(mx,v[i]);
            if (v[i] == 2) ans += 2;
            else if(v[i] > 2){
                ans += v[i];
                ans += min(cnt,((v[i]-2)/2));
                if (cnt <= (v[i]-2)/2) cnt = 0;
                else{
                    cnt -= (v[i]-2)/2;
                }
            }
        }
        if (ans == 2 && cnt > 0) cout << 3 << endl;
        else if (ans < 3) cout << 0 << endl;
        else {
            if ((mx + (mx-2)/2) == ans) ans += min(1ll,cnt);
            cout << ans << endl;
        }
    }

    return 0;
}