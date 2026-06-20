#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0, mx = 0;
        vector <int> v;
        for (int i = 0; i < n; i ++){
            if (i == n-1 && s[i] == '0'){
                cnt ++;
                v.push_back(cnt);
                continue;
            }
            if (s[i] == '1'){
                v.push_back(cnt);
                cnt = 0;
            }
            else cnt ++;
        }

        if (s[0] == '0' && s[s.size()-1] == '0'){
            v[0] += v[v.size()-1];
        }

        int ans = 0;
        for (auto it : v){
            ans = max(it,ans);
        }

        cout << ans << endl;
    }

    return 0;
}