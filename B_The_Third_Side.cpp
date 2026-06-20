#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort (v.begin(),v.end());

        while (v.size() > 1){
            vector <int> vt;
            if (v.size()%2 == 1) vt.push_back(v.back());
            for (int i = 0; i < v.size() - (v.size()%2 == 1); i += 2){
                vt.push_back(v[i] + v[i+1] - 1);
            }
            v = vt;
        }

        cout << v[0] << endl; 
    }

    return 0;
}