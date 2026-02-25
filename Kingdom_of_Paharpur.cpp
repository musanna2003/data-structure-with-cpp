#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q; cin >> n >> q;
    vector <long long> v(n);
    for (int i = 0; i < n ; i++){
        cin >> v[i];
    }
    vector <long long> dp;
    int l = 0, r = 0, m = 0;
    for (int i = 1; i < n-1; i ++){
        if (v[i] > v[i-1] && v[i] > v[i+1]) m = i;
        if ()
    }

    return 0;
}