#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int tm = n/2020;

        if (n >= tm*2020 && n <= tm*2021) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}