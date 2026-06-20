#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector <long long> v(n);
        for (int i = 0; i<n ; i++) v[i] = i+1;
        bool f = 0;
        int cnt = 0;
        int i = 0;
        for (; i < n; i++){
            if(s[i] == '0'){
                cnt ++;
            }
            else {
                if(cnt == 1){
                    f = 1;
                    break;
                }
                reverse(v.begin()+(i-cnt),v.begin()+i);
                cnt = 0;
            }
        }
        if(cnt == 1){
            f = 1;
        }
        reverse(v.begin()+(i-cnt),v.begin()+i);
        if(f) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for (auto it : v) cout << it << " ";
            cout << endl;
        }
    }

    return 0;
}