#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n , m; cin >> n >> m;
        long long sed = 2;
        for (int i = 1; i <= n; i ++){
            sed = 2 + i;
            for (int j = 1; j <=m; j ++){
                cout << sed << ' ';
                sed ++;
            }
            cout << endl;
        }
    }

    return 0;
}