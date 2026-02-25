#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long s,m;
        cin >> s >> m;
        vector <int> v(32);
        for (int i = 31; i >= 0; i --){
            v[i] = (s >> i) & 1;
            cout << v[i] << " ";
        }
        cout << endl;

    }

    return 0;
}