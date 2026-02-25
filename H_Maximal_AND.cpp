#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <long long> v(n),mb;
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }

        for (int i = 0; i <= 30 ; i ++){
            int cnt = 0;
            for (auto it : v){
                if (((it >> i) & 1) == 0) cnt ++;
            }
            mb.push_back(cnt);
        }

        long long ans = 0;

        

        reverse(mb.begin(),mb.end());

        for (int i = 0; i <= 30; i ++){
            if (k >= mb[i]){
                int sd = 1, j = 30-i;
                while (j --){
                    sd *= 2;
                }
                ans += sd;
                k -= mb[i];
            }
        }
        // for (auto it : mb) cout << it << " ";
        // cout << endl;

        cout << ans << endl;

    }

    return 0;
}