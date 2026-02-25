#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;
    vector <long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int i =0, j = 0;
    long long s = 0;
    int mx = 0;
    while (i < n){
        if (s <= k){
            mx = max (mx, i - j + 1);
            s += v[i]; i ++;
            if (i == n && s <= k ) mx = max (mx, i - j + 1);
        }
        else if (s> k){
            s -= v[j]; j ++;
        }

    }
    
    cout << mx-1;
    return 0;
}