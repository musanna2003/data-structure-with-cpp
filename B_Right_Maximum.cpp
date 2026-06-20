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

        int ref= v[0], cnt = 1;
        for (int i = 1; i < n; i++){
            if (v[i] >= ref){
                cnt ++;
                ref = v[i];
            }
        }
        cout << cnt << endl; 
    }

    return 0;
}