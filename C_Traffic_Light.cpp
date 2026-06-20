#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; char c;
        cin >> n >> c;
        string s; cin >> s;

        int fc = 0;
        int ans = 0;
        for (int i = 0; i < n; i++){
            fc ++;
            if (s[i] == 'g') break;
        }

        for (int i = 0; i < n + fc; i ++){
            if (s[i%n] == c){
                int cnt = 0;
                while(s[i%n] != 'g'){
                    cnt ++;
                    i ++;
                }
                ans = max(ans,cnt);
                // i ++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}