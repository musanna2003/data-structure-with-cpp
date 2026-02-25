#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        for (int i = 0; i < n; i ++){
            cin >> v[i];
        }
        int cnt = 1;
        long long x = v[0];
        for (int i = 1; i < n; i++){
            if (v[i] >= x + 1 && v[i] <= v[i-1] + 1){

            }
            else {
                cnt ++;
                x = v[i];
            }
        }

        cout << cnt << endl;
    }

    return 0;
}