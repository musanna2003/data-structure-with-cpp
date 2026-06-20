#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <vector<long long>> v(m);
        for(int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                long long val; cin >> val;
                v[j].push_back(val);
            }
        }
        long long sm = 0;
        for(int i = 0; i < m; i++){
            sort(v[i].begin(),v[i].end());
            long long ts = 0;
            for (int j = 1; j < n; j++){
                ts += j*(abs(v[i][j-1] - v[i][j]));
                sm += ts;
            }
            // cout << ts << " ";
        }

        cout << sm << endl;
    }

    return 0;
}