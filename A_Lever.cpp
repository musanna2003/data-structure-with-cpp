#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(n),b(n);
        long long s = 0;
        for (int i = 0 ; i <n; i++){
            cin >> a[i];
        }
        for (int i = 0 ; i < n; i ++){
            cin >> b[i];
        }
        for (int i = 0 ; i < n; i++){
            if (a[i] > b[i]) s += a[i] - b[i];
        }
        cout << s + 1 << endl;
    }

    return 0;
}