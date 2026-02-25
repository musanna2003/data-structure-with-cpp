#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool f = 0;
        while (n--){
            long long val; cin >> val;
            if (val == 67) f = 1;
        }

        cout << (f?"YES":"NO") << endl;
    }

    return 0;
}