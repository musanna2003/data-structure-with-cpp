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
        bool f = 1;
        long long d = 0;
        for (int i = 1; i < n; i++){
            if (v[i] < v[i-1]){
                d =max(d, v[i-1] - v[i]);
            }
        }

        for (int i = 1; i < n; i++){
            if (v[i] < v[i-1]){
                v[i] += d;
            }
        }
        
        cout << (is_sorted(v.begin(),v.end()) ? "YES" : "NO") << endl;
    }
    return 0;
}