#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <long long> v(n);
        for (int i= 0; i < n; i++) cin >> v[i];
        long long r = v[k-1];
        sort(v.begin(),v.end());

        string ans = "YES";
        for (int i = 0; i < n-1; i++){
            if (v[i] >= r && v[i+1] - v[i] > r){
                ans = "NO";
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}