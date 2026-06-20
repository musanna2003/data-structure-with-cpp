#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b; cin >> a >> b;
        if (b-a > 0 && a >= (b-a)*2 && b >= (b-a)*3) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }

    return 0;
}