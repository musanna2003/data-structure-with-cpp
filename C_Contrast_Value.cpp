#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v;
        for (int i = 0; i < n; i++){
            long long val; cin >> val;
            if(i == 0){
                v.push_back(val);
            }
            else{
                if(val != v.back()) v.push_back(val);
            }
        }

        int cnt = 2;

        for (int i = 1; i < v.size()-1; i ++){
            if ((v[i] > v[i-1] && v[i] > v[i+1] || (v[i] < v[i-1] && v[i] < v[i+1]))) {
                cnt ++;
            }
        }
        if (v.size() == 1) cnt = 1;
        cout << cnt << endl;

        // for (auto it : v) cout << it << " ";
        // cout << endl;
    }

    return 0;
}