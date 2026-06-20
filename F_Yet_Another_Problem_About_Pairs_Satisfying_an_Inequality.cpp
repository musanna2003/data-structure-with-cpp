#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> sv,si;
        
        for (long long i = 1; i <= n; i++){
            long long val; cin >> val;
            if(val < i){
                sv.push_back(val);
                si.push_back(i);
            }
        }
        sort(sv.begin(),sv.end());
        long long ans = 0;

        for (auto it : si){
            ans += sv.end() - upper_bound(sv.begin(), sv.end(), it);
        }

        cout << ans << endl;
    }

    return 0;
}