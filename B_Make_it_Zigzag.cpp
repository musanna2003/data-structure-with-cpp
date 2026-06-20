#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        long long cnt = 0, mx = 0;
        if (v[0] >= v[1]) cnt = 1;
        for (int i = 0; i < n; i++){
            mx = max(mx,v[i]);
            if (i % 2 == 1){
                v[i] = mx;
            }
        }

        for (int i = 1; i < n; i++){
            if (i % 2 == 0){
                if (v[i] >= v[i-1]){
                    cnt += v[i] - v[i-1] + 1;
                }
            }
        }

        cout << cnt << endl;

    }

    return 0;
}