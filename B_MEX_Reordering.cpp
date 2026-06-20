#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int f0 = 0, f1 = 0;
        while (n--){
            int val; cin >> val;
            if ( val == 1) f1 ++;
            if (val == 0) f0 ++;
        }
        
        if (f0 == 1 || (f0 > 1 && f1 > 0)) cout << "YES" << endl;
        else  cout << "NO" << endl;
    }

    return 0;
}