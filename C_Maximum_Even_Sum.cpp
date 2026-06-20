#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b; cin >> a >> b;
        if (b%2 == 1 && a%2 == 1) cout << a*b + 1 << endl;
        else if(a%2 == 0 && b%2 == 1) cout << -1 << endl;
        else if((b/2)%2 == 1 && a%2 == 1) cout << -1 << endl;
        else cout << 2 + ((b/2)*a) << endl;
    }

    return 0;
}