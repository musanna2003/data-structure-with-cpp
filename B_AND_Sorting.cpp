#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i ++){
            int val; cin >> val;
            if (val != i) v.push_back(val);
        }

        if(v.size() == 0){
            cout << 0 << endl;
            continue;
        }
        int ans = v[0];

        for (auto it : v){
            ans = (ans&it);
        }

        cout << ans << endl;
        
    }

    return 0;
}