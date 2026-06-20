#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;

        for (long long i = 1; i < n+1; i++){
            cout << i * (i + 1)<< " ";
        }
        cout << endl;
    }

    return 0;
}