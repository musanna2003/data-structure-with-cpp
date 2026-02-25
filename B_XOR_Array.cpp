#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,l,r; cin >> n >> l >> r;
        vector <long long> p(n+1);
        p[0] = 0;
        for (int i = 1; i<= n; i ++){
            if (i == r){
                p[i] = p[l-1];
            }
            else {
                p[i] = i;
            }
        }

        for (int i = 1; i <= n; i ++){
            cout << ((p[i])^(p[i-1])) << " ";
        }
        cout << endl;
    }

    return 0;
}