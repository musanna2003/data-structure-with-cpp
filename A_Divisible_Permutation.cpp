#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <int,int> mp;
        vector <int> v(n);
        v[n-1] = 1;
        bool f = 1;
        for (int i = n-2; i>=0; i--){
            if (f) {
                v[i] = i + 1 + v[i+1];
                f = 0;
            }
            else {
                v[i] = abs(i + 1 - v[i+1]);
                f = 1;
            }
        }

        for (auto it : v) cout << it << ' ';
        cout << endl;
    }

    return 0;
}