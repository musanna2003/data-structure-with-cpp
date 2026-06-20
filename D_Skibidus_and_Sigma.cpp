#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector<vector<long long>> v(n, vector<long long>(m + 1, 0));
        for (int i = 0; i < n; i++){
            long long sm = 0;
            for (int j = 0; j < m; j ++){
                long long val; cin >> val;
                sm += val;
                v[i][j+1] = val;
            }
            v[i][0] = sm;
        }

        sort (v.rbegin(),v.rend());
        vector <long long> pf;
        long long smm = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j ++){
                smm += v[i][j+1];
                pf.push_back(smm);
            }
        }

        smm = 0;
        for (int i = 0; i < m*n; i++) {
            smm += pf[i];
            pf[i] = smm;
        }
        cout << pf.back() << endl;
    }

    return 0;
}