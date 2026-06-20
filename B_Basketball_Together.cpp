#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,d; cin >> n >> d;
    vector <long long> v(n);
    for (int i = 0; i < n; i ++) cin >> v[i];

    sort(v.rbegin(),v.rend());
    int cnt = 0;
    int ans = 0;
    d ++;
    for (int i = 0;i <n && cnt <= n; i ++){
       cnt += (d + v[i] -1)/v[i];
       if (cnt <= n) ans ++;
    }

    cout << ans << endl;

    return 0;
}