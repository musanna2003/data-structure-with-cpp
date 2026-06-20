#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> e,o;
        for (int i = 0; i < n; i++) {
            long long val ; cin >> val;
            if (val%2 == 0) e.push_back(val);
            else o.push_back(val);
        }
        sort (o.rbegin(),o.rend());
        sort (e.rbegin(),e.rend());
        if (o.size() == 0){
            for (int i = 0; i < n; i++) cout << 0 << " ";
        }
        else if(e.size() == 0){
            for (int i = 0; i < n; i++){
                if(i%2 == 0) cout << o.front() << " ";
                else cout << 0 << " ";
            }
        }
        else if(o.size() == 1){
            long long sm = 0;
            for (int i = 0; i < n; i++) {
                if (i == 0) sm += o.front();
                else sm += e[i-1];
                cout << sm << " ";
            }
        }
        // else if(o.size() == 2){
        //     long long sm = 0;
        //     for (int i = 0; i < n-1; i++) {
        //         if (i == 0) sm += o.front();
        //         else sm += e[i-1];
        //         cout << sm << " ";
        //     }
        //     cout << 0 << " ";
        // }
        else {
            vector <long long> ans;
            long long sm = 0;
            for (int i = 0; i < e.size() + 1; i++){
                if (i == 0) sm += o.front();
                else sm += e[i-1];
                ans.push_back(sm);
                cout << sm << " ";
            }
            for (int i = 0; i < o.size() - 1; i++){
                if (o.size() == i+2 && o.size() % 2 == 0){
                    cout << 0 << " ";
                    continue;
                }
                if(i%2 == 1) cout << ans.back() << " ";
                else cout << ans[ans.size() - 2] << " ";
            }
        }
        cout << endl;

    }

    return 0;
}