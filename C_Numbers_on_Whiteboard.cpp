#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        
        cout << 2 << endl;
        if (n ==2){
            cout << n << " " << n-1 << endl;
            continue;
        }
        cout << n << " " << n-2 << endl;
        cout << n-1 << " " << n-1 << endl;
        int a = n-1, b = n-3;
        while(b>=1){
            cout << a << " " << b << endl;
            a--; b--;
        }
    }

    return 0;
}