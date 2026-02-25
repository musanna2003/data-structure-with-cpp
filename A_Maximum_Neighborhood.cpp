#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n > 4){
            int x = n*n - n - 1;
            cout << 3*x + 2*x << endl;
        }
        else if (n == 4) cout << 56 << endl;
        else if (n == 3) cout << 29 << endl;
        else if (n == 2) cout << 9 << endl;
        else if (n == 1) cout << 1 << endl;
    }

    return 0;
}