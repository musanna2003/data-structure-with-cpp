#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,m,q;
        cin >> n >> m >> q;
        vector < long long > v(m);
        for (int i = 0; i < m; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        while (q --){
            long long qry;
            cin >> qry;
            auto low = lower_bound(v.begin(),v.end(),qry);
            auto upr = upper_bound(v.begin(),v.end(),qry);

            if (low == v.end()){
                cout << n-v.back() << "\n";
            }

            else if (upr == v.begin()){
                cout << v.front()-1 << "\n";
            }
            else if (qry == *low) cout << 0 << endl;
            else if (upr == low){
                low -= 1;
                cout << (*upr - *low )/2 << endl;
            }

        }
        
    }

    return 0;
}