#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        int mx = 0,cm = 0;
        vector <vector<int>> v(n);
        for (int i = 0; i< n; i ++){
            for (int j = 0; j < m; j++){
                int val; cin >> val;
                v[i].push_back(val);
                mx = max(mx,val);
            }
        }

        map <int,int> r,c;
        for (int i = 0; i< n; i ++){
            for (int j = 0; j < m; j++){
                if(v[i][j] == mx){
                    cm++;
                    r[i] ++;
                    c[j] ++;
                }
            }
        }

        int f = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (r[i] + c[j] - (v[i][j] == mx) == cm) {
                    f = 1;
                }
            }
        }
        cout << mx - f << endl;
    }

    return 0;
}