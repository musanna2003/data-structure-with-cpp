#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,m,a,b; cin >> n >> m >> a >> b;
        if (n == 1 && m == 1){
            cout << "YES" << endl;
            continue;
        }
        if (n == 2 && m == 2 && a % 2 == 1 && b % 2 == 1){
            cout << "YES" << endl;
            continue;
        }

        if (lcm(n,a) == n * a && lcm(m,b) == m * b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}