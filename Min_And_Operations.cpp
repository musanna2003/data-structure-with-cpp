#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long cnt = 0;
        for (int i = 2; i <= n; i += 2){
            cnt += i;
        }
        cout << cnt << endl;
    }

    return 0;
}