#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0) cnt ++;
        }

        if (cnt == 0){
            cout << 1 << endl;
            cout << 1 << " " << n << endl;
        }
        else if (v[0] == 0 && v[n-1] == 0){
            cout << 3 << endl;
            cout << 1 << " " << 2 << endl;
            cout << 2 << " " << n-1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else if(v[0] == 0){
            cout << 2 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else {
            cout << 2 << endl;
            cout << 2 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
        }

    }

    return 0;
}