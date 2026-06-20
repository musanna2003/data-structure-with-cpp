#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;

        vector <int> vn;
        bool f0 = 0;
        int sm = 0;
        int mx = INT_MAX;
        for (int i = 0; i < m*n; i ++){
            int val; cin >> val;
            if (val == 0) f0 = 1;
            else if(val < 0) vn.push_back(val);
            else sm += val;
            mx = min(mx,abs(val));
        }
        
        for (int it : vn){
            sm += abs(it);
            mx = min(mx,abs(it));
        }
        if (!f0 && vn.size() > 0 && vn.size()%2 == 1){
            sm -= 2*mx; 
        }

        cout << sm << endl;
    }

    return 0;
}