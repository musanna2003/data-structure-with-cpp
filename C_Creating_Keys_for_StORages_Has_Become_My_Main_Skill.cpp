#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,x; cin >> n >> x;
        vector <long long> ans;
        long long vl = 0;
        long long r = 0;
        while (ans.size() < n){
            if((r | x) == x){
                ans.push_back(r);
                vl |= r;
            }
            else break;
            r ++;
        }
        while (ans.size() < n){
            ans.push_back(x);
        }
        if (vl != x) ans.back() = x;
        for (auto it : ans) cout << it << " ";
        cout << endl;

    }

    return 0;
}