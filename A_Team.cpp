#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    long long cnt = 0;
    while (t--) {
        int a,b,c; cin >> a >> b >> c;
        int x = a + b + c;
        if ( x >= 2)cnt += 1;  
    }
    cout << cnt << endl;

    return 0;
}