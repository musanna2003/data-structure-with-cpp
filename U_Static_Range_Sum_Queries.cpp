#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin >> n >> q;
    vector <long long> v(n), pfx = {0};
    long long sum = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
        pfx.push_back(sum);
    }
    while (q--){
        int a,b; cin >> a >>b;
        cout << pfx[max(a,b)] - pfx[min(a,b)-1] << endl; 
    }

    return 0;
}