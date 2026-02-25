#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n ;
        vector <int> a(n), b(n);
        int c1 = 0;
        for (int i =0;i < n; i++){
            cin >> a[i];
            if (a[i] == 1) c1 ++;
        }
        for (int i =0;i < n; i++){
            cin >> b[i];
            if (b[i] == 1) c1 ++;
        }
        if (c1 % 2 == 0) {
            cout << "Tie" << endl; 
            continue;
        }
        for (int i = n-1; i >= 0; i--){
            if (a[i] != b[i]) {
                cout << (i % 2 == 0 ? "Ajisai" : "Mai") << endl;
                break;
            }
        }
    }

    return 0;
}