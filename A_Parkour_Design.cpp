#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long x,y; cin >> x >> y;
        if (y >= 0){
            x -= y*2;
            if (x%3 == 0 && x >= 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            x -= abs(y)*4;
            if (x%3 == 0 && x >= 0) cout << "YES" << endl;
            else cout << "NO" << endl;

        }
    }

    return 0;
}