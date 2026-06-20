#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int cnt = 0;

        vector <int> ans;
        for (int i = n-1; i >= 0; i--){
            if(cnt%2 == 0 && v[i] >= 0){
                cnt ++;
                ans.push_back(i+1);
            }
            else if(cnt%2 == 1 && v[i]<=0){
                cnt ++;
                ans.push_back(i+1);
            }
        }

        cout << cnt << endl;
        for (auto i : ans) cout << i << " ";
        cout << endl;
    }

    return 0;
}