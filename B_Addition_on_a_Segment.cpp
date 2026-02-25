#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    while (t--) {
        // cout << t << " ";
        long long n; cin >> n;
        long long sum = 0;
        vector <int> v(n);
        int c = 0;
        int mx = -1;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if (v[i] == 0) c ++;
            mx = max (v[i],mx);
            sum += v[i];
        }
        cout << (n < sum? min(n-c,1+sum - n) : 1) << endl;
    }

    return 0;
}