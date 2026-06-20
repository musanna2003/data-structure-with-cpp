#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,m; cin >> n >> m;
        vector <long long> v(m),vv(m);
        for (int i = 0; i < m; i++) cin >> v[i];

        if(m == 1){
            cout << min(2ll,n) << endl;
            continue;
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < m; i++) {
            if (i == m-1) vv[i] = abs(n -v[i] + v[0]-1);
            else vv[i] = abs(v[i] - v[i+1]) - 1;
        }

        sort(vv.rbegin(),vv.rend());
        long long sv = 0;
        long long cnt = 0;
        for (int i = 0; i < m; i++) {
            if(vv[i]-(2*cnt) > 0 ){
                if (vv[i]-(2*cnt) <= 2){
                    sv += 1;
                    cnt ++;
                }
                else{
                    sv += vv[i]-(2*cnt) -1;
                    cnt += 2;
                }
            }
        }
        cout << n - sv << endl;
    }

    return 0;
}