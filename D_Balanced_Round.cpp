#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < n - 1; i ++){
            if (i == n-2){
                if (v[i+1] - v[i] > k){
                    ans = max(cnt,ans);
                    cnt = 0;
                }
                else{
                    cnt ++;
                    ans = max(cnt,ans);
                }
            }
            if (v[i+1] - v[i] > k){
                ans = max(cnt,ans);
                cnt = 0;
            }
            else{
                cnt ++;
            }
        }

        cout << n-ans-1 << endl;
    }

    return 0;
}