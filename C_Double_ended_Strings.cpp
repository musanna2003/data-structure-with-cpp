#include <bits/stdc++.h>
using namespace std;

bool sb_st(string s, string sb) {
    int n = s.size(), m = sb.size();
    for (int i = 0;i <= n - m; i++){
        bool f = 1;
        for(int j = 0; j < m; j ++){
            if (sb[j] != s[i + j]){
                f = 0;
                break;
            }
        }
        if (f) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string a,b; cin >> a >> b;
        int n = a.size();
        int ans = 0;
        for (int i = 0; i < n; i++){
            for(int j = 1;j <= n-i;j++){
                if(sb_st(b,a.substr(i,j))){
                    ans = max(ans,j);
                }
            }
        }

        cout << a.size()-ans+b.size()-ans << endl;
    }

    return 0;
}