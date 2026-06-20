#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        for (int i = 0; i < n; i ++){
            string s; cin >> s;
            for (int j = 0; j < n; j ++) {
                v[i][j] = s[j] - '0';
            }
        }
        int ans = 0;

        for (int i = 0; i < n/2; i++){
            for (int j = i; j < n-i-1; j++){
                int c1 = 0, c2 = 0;
                // c1 += v[i][j] + v[j][n-i-1] + v[n-i-1][n-i-1-j] + v[n-i-1-j][i];
                c1 = v[i][j] 
                    + v[j][n-1-i] 
                    + v[n-1-i][n-1-j] 
                    + v[n-1-j][i];
                c2 = 4-c1;
                ans += min(c1,c2);
            }
        }

        

        cout << ans << endl;
    }

    return 0;
}