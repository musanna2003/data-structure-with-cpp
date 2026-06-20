#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n ;
        vector <int> v(n),vv;
        int mx = 0;
        int idx = 0;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if (mx < v[i]){
                mx = v[i];
                idx = i;
            }
        }
        swap (v[0],v[idx]);
        for (auto it : v){
            cout << it << " ";
        }

        cout << endl;
    }

    return 0;
}