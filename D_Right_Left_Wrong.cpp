#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <long long> v(n);
        long long sum = 0;
        for (int i = 0; i < n; i ++){
            int val; cin >> val;
            sum += val;
            v[i] = sum;
        }
        string s; cin >> s;
        int l = 0;
        int r = n-1;
        long long ans = 0;
        while (l < r){
            if (s[l] == 'L' && s[r] == 'R' ){
                if (l == 0) ans += v[r];
                else{
                    ans += v[r] - v[l-1]; 
                }
                l ++; r--;
                continue;
            }
            if (s[l] == 'R') l ++;
            if (s[r] == 'L') r --;
        }
        cout << ans << endl;
    }

    return 0;
}