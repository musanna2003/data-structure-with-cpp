#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int cn1 = 0,c0 = 0;
        while (n--){
            int val;
            cin >> val;
            if (val == -1) cn1++;
            else if (val == 0) c0 ++;
        }
        cout << c0 + cn1%2 * 2 << endl;
    }

    return 0;
}