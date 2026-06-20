#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < n - 1; i ++){
            if (i == n-2){
                if (s[i+1] != s[i]){
                    ans = max(cnt,ans);
                    cnt = 0;
                }
                else{
                    cnt ++;
                    ans = max(cnt,ans);
                }
                continue;
            }
            if (s[i+1] != s[i]){
                ans = max(cnt,ans);
                cnt = 0;
            }
            else{
                cnt ++;
            }
        }

        cout << ans + 2 << endl;
    }

    return 0;
}