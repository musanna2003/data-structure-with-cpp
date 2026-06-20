#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(n),b(n);
        for (int i = 0; i < n; i ++) cin >> a[i];
        for (int i = 0; i < n; i ++) cin >> b[i];
        map <int,int> ma,mb;
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (i == n - 1){
                cnt ++;
                ma[a[i]] = max(ma[a[i]],cnt);
                continue;
            }
            if (a[i]==a[i+1]) cnt ++;
            else {
                cnt ++;
                ma[a[i]] = max(ma[a[i]],cnt);
                cnt = 0;
            }
        }

        cnt = 0;
        for (int i = 0; i < n; i++){
            if (i == n - 1){
                cnt ++;
                mb[b[i]] = max(mb[b[i]],cnt);
                continue;
            }
            if (b[i]==b[i+1]) cnt ++;
            else {
                cnt ++;
                mb[b[i]] = max(mb[b[i]],cnt);
                cnt = 0;
            }
        }

        int ans = 0;
        for (auto it : ma) ans = max(ans,it.second + mb[it.first]);
        for (auto it : mb) ans = max(ans,it.second + ma[it.first]);

        cout << ans << endl;
    }

    return 0;
}