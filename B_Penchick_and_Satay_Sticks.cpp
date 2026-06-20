#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool f= 0;
        for (int i = 1; i <= n; i++){
            int val; cin >> val;
            if (val != i && val != i+1 && val != i -1) f = 1;
        }
        cout << (!f? "YES" : "NO") << endl;
    }

    return 0;
}