#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> a(n),b(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        if (a[n-1] != b[n-1]){
            cout << "NO" << endl;
            continue;
        }
        bool f= 1;
        for (int i = 0; i < n-1; i++){
            if(a[i] != b[i] && ((a[i]^a[i+1]) == b[i])) {
                a[i] = b[i];
            }
        }
        for (int i = n-2; i >=0; i--){
            if(a[i] != b[i] && ((a[i]^a[i+1]) == b[i])) {
                a[i] = b[i];
            }
        }

        for (int i = 0; i < n-1; i++){
            if(a[i] != b[i]) {f = 0;break;}
        }
        cout << (f? "YES":"NO") << endl;
    }

    return 0;
}