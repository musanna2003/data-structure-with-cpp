#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;  cin >> n;
        
        for (int i = 1; i < n; i++){
            if(i == (1 << (31 - __builtin_clz(n-1)))) cout << 0 << " ";
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}