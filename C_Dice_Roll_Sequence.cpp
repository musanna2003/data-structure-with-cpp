#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);

        for (int i = 0; i < n; i++) cin >> v[i];

        int c =0;
        ;
        for (int i = 0; i < n-1; i++){
            if (i < n-1 && (v[i+1] == 7 - v[i] || 7-v[i+1] == v[i] || v[i] == v[i+1] )){
                c++; i ++;
            }
        }
        
        cout << c << endl;
    }

    return 0;
}