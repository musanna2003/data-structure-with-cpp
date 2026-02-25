#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector <int> v(n);
    vector <int> pf(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int sm = 1;
    for (int i = 0; i < n; i++){
        sm+= v[i];
        pf[i] = sm;
    }

    int m; cin >> m;
    while (m--){
        int tr; cin >> tr;
        int l = 0, h = n-1;
        while (l <= h){
            int m = (l + h) / 2;
            if (pf[m] <= tr) {
                l = m +1;
            } 
            else {
                h = m -1;
            }
        }
        cout << l + 1 << endl;
    }


    return 0;
}