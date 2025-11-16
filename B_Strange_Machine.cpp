#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin>> n >> m;
        string s;
        cin >> s;
        int f = 0;
        for (char ch : s){
            if (ch == 'B') f = 1;
        }
        
        for (int i = 0; i < m; i ++){
            long long q;
            cin >> q;
            if (!f) {
                cout << q << endl;
                continue;
            }
            int count  = 0;
            int j = 0;
            while (q > 0){
                count ++;
                if (s[j] == 'A'){
                    q -= 1;
                }
                else {
                    q = q/2;
                }
                j ++;
                if (j == n) j = 0;
            }
            cout << count << endl;
        }
    }
    return 0;
}