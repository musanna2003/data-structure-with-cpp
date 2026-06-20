#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <vector<int>> v(n);
        map <int,int> mp;
        for (int i = 0; i < n; i++){
            int m; cin >> m;
            for (int j = 0; j < m; j++){
                int val; cin >> val;
                v[i].push_back(val);
                mp[val] ++;
            }
        }

        string ans = "No";
        for (int i = 0; i < n; i++){
            int m = v[i].size();
            bool f = 1;
            for (int j = 0; j < m; j++){
                if(mp[v[i][j]] == 1) f = 0;
            }
            if (f) {
                ans = "Yes";
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}