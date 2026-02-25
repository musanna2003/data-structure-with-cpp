#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int k,n; cin >> k >> n;
        while (k--){
            if (n != 1 && (n-1) % 3 == 0 && ((n-1) /3)%2 == 1) n = (n-1) /3;
            else {
                n = n*2;
            }
        }
        cout << n << endl;
    }

    return 0;
}