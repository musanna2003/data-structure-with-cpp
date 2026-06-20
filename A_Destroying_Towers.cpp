#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        for (int i = 0;i < n; i++){
            cin >> v[i];
        }

        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if(v[i] < v[j]) v[j] = v[i];
            }
        }
        long long sm = 0;
        for (auto i : v) sm += i;
        cout << sm << endl;
    }

    return 0;
}