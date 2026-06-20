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
        for (int i = 0; i < n-1; i++){
            if (v[i] > v[i+1]){
                swap(v[i],v[i+1]);
                v[i+1] += v[i];
            }
        }
        cout << v[n-1] << endl;
    }

    return 0;
}