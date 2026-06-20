#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,q;
        cin >> n >> q;
        if (q == 0){
            cout << n/2 << endl;
        }
        else{
            q++;
            cout << (n) / q << endl;
        }
    }

    return 0;
}