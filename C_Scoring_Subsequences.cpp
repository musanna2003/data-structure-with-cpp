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

        for (int i = 0; i < n; i++){
            int l = 1, r = i+1;
            while(l <= r){
                int m = (l+r)/2;
                if (v[i-m + 1] >= m){
                    l = m+1;
                }
                else r = m-1;
            }
            cout << r << " ";
        }
        cout << endl;
    }

    return 0;
}