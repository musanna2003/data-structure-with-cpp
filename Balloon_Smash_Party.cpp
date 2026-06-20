#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i ++){
            cin >> v[i] ;
        }
        int cnt = 1;
        cout << 0 << " ";
        for (int i = 1; i < n; i++){
            cout << min(v[i],cnt) << " ";
            if (v[i] > cnt) cnt ++;
        }
        cout << endl;
    }

    return 0;
}