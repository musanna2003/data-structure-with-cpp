#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <vector <int>> v(n,vector<int>(m)) ;
        map <int,int> mp;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j ++){
                cin >> v[i][j];
                mp[v[i][j]] = 1;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m-1; j ++){
                if(v[i][j] == v[i][j+1]) mp[v[i][j]] = 2;
            }
        }
        for (int j = 0; j < m; j++){
            for (int i = 0; i < n-1; i ++){
                if(v[i][j] == v[i+1][j]) mp[v[i][j]] = 2;
            }
        }
        int ans = 0;
        int mx = 0;
        for (auto it : mp){
            ans += it.second;
            mx = max(mx,it.second);
        }
        cout << ans-mx << endl;
    }

    return 0;
}