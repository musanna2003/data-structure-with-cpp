#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        int cnt = 0;
        for (int i = 0 ; i < n-1; i++){
            if (v[i] < v[i+1]) cnt ++;
        }

        cout << cnt << endl;
    }

    return 0;
}