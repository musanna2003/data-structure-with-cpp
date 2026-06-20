#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        bool f = 1;
        int i = 2;
        for (; i*i <= n; i ++){
            if (n % i == 0){
                f = 0;
                break;
            }
        }
        if (f) cout << 1 << " " << n-1 << endl;
        else cout << n/i << " " << n-(n/i) << endl;
    }

    return 0;
}