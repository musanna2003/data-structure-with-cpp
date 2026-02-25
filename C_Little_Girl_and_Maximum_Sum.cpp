#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q; cin >> n >> q;
    vector <int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector <int> df(n+2);
    for (int i = 0; i < n+1; i++) df[i] = 0;
    while(q--){
        int a,b; cin >> a >> b;
        df[a-1] ++;
        df[b]--;
    }
    vector <long long> pf;
    long long s = 0;
    for (int i = 0; i < n; i++) {
        s += df[i];
        pf.push_back(s);
    }
    sort(pf.begin(),pf.end());
    sort(v.begin(),v.end());
    long long sum = 0;
    for (int i = 0; i < n; i++){
        sum += v[i] * pf[i];
    }
    cout << sum;
    return 0;
}