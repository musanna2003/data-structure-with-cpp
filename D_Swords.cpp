#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector <long long> v(n);
    for (int i = 0 ; i <n; i++){
        cin >> v[i];
    } 

    long long gcd = 0;
    long long mx = v[0];
    for (int i = 0 ; i <n; i++){
        mx = max(mx,v[i]);
    }
    for (int i = 0 ; i <n; i++){
        if (mx-v[i] > 0) gcd = __gcd(gcd,mx-v[i]);
    }

    long long s = 0;
    
    for (int i = 0 ; i <n; i++){
        s += (mx - v[i]) / gcd;
    } 
    cout << s << " " << gcd << endl;

    return 0;
}