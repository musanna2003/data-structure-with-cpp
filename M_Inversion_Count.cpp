#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n),v1,v2;
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        v1.push_back(v[0]);
        int pv = v[0];
        for (int i = 1; i < n; i++){
            if (pv < v[i]){
                v1.push_back(v[i]);
            }
            else {
                v2.push_back(v[i]);
            }
            pv = v[i];
        }
        int n1 = v1.size(), n2 = v2.size();
        cout << n1 * n2 << endl;
    }

    return 0;
}