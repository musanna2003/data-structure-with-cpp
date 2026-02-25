#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i ++){
        cin >> v[i];
    }
    int m; cin >> m;
    sort(v.begin(),v.end());
    while (m--){
        long long q; cin >> q;
        auto ub = upper_bound(v.begin(),v.end(),q);
        cout << ub - v.begin() << endl;
    }

    return 0;
}