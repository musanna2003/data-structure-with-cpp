#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n ; i ++){
            cin >> v[i];
        }

        map <int,int> mpi;
        map <int,int> mpf;
        int count = 0;
        mpi[v[0]] ++;
        for (int i = 1; i < n; i++) {
            mpf[v[i]] ++;
            if (mpi.count(v[i])){
                mpi.erase(v[i]);
            }
            if (mpi.empty()){
                count ++;
                mpi = mpf;
            }
        }

        cout << count + 1 << endl;
    }

    return 0;
}