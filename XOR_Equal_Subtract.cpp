#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i++){
            int val; cin >> val;
            v.push_back(val);
        }
        
        vector <int> ans;
        for (int i = 0; i < n - 1; i++) {
            int c = 0;
            for (int j = i + 1; j < n; j++) {
                if (abs(v[i] - v[j]) == (v[i] ^ v[j])) {
                    c++;
                } 
                else {
                    break;
                }
            }
            ans.push_back(c);
        }

        for (int i : ans){
            cout << i << ' ';
        }
        cout << endl;

        // int m = ans.size();
        // int mx = 1;

        // for (int i = 0; i < m; i++) {
        //     int tot = 1;
        //     for (int j = 1; j <= ans[i] && i + j < m; j++) {
        //         if (ans[i+j] >= ans[i] - j)
        //             tot++;
        //         else
        //             break;
        //     }
        //     mx = max(mx, tot);
        // }

        // cout << mx << endl;
    }

    return 0;
}