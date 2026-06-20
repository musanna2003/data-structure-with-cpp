#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        if (n %2 == 0){
            cout << 2 << endl;
            cout << 1 << " " << n << endl;cpp
            cout << 1 << " " << n << endl;
        }
        else{
            cout <<4 <<endl;
            cout << 1 << " " << n/2 << endl;
            cout << 1 << " " << n/2 << endl;
            cout << n/2 << " " << n << endl;
            cout << n/2 << " " << n << endl;
        }
    }

    return 0;
}