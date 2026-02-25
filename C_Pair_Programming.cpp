#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int k,n,m; cin >> k >> n >> m;
        vector <int> vn(n),vm(m);
        
        for (int i =0; i< n ; i++){
            cin >> vn[i];
        }
        for (int i =0; i< m ; i++){
            cin >> vm[i];
        }

        vector <int> ans;
        int p1 = 0, p2 =0;
    
        while (p1 < n || p2 < m){
            if (p1 < n && p2 < m){
                ans.push_back(min(vn[p1],vm[p2]));
                if (vm[p2] < vn[p1]) p2++;
                else p1++;
            }
            else if(p1 < n){
                ans.push_back(vn[p1]);
                p1 ++;
            }
            else if (p2 < m){
                ans.push_back(vm[p2]);
                p2 ++;
            }
        }
        bool f = 0;
        for (int i : ans){
            if (i == 0) k ++;
            if (i > k) f = 1;
        }
        if (f) cout << -1 << endl;
        else{
            for (int i : ans){
                cout << i << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}