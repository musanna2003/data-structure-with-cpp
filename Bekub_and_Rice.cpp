#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;
    vector <int> v(n);
    for (int i = 0; i<n; i++){
        cin >> v[i];
    }

    long long s = 0;
    int i = 0, j = 0;
    bool f = 0;
    while (i < n || j < n){
        if (s < k){
            s += v[i];
            i ++;
        }
        else if ( s > k){
            s -= v[j];
            j ++;
        }
        if (s!= 0 && k%s == 0){
            f = 1;
            break;
        }
    }
    cout << (f? "YES\n":"NO\n");

    return 0;
}