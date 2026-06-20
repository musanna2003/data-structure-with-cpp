#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,x; cin >> n >> x;
        vector <long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(),v.end());

        vector <long long> pf(n);
        pf[0] = v[0];
        for (int i = 1; i < n; i++){
            pf[i] = pf[i-1] + v[i];
            // cout << pf[i] << ' ';
        }

        long long cnt = 0;
        int i = 0;
        for (; i<n; i++){
            if(pf[i] <= x){
                cnt += (x - pf[i]) / (i+1);
            }
            else break;
        }
        

        cout << cnt + i << endl;
    }

    return 0;
}