#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int m; cin >>m;
        string sm; cin >> sm;
        string sd; cin >> sd;
        
        for (int i = 0; i < m; i ++){
            if (sd[i] == 'V'){
                s = sm[i] + s;
            }
            else{
                s = s + sm[i];
            }
        }
        cout << s << endl;
    }

    return 0;
}