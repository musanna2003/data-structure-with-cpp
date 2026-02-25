#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int c1 = 0,c0 = 0;
        if (n == 1){
            if (s[0] == '1') cout << -1 << endl;
            else cout << 0 << endl;
            continue;
        }
        for (auto c : s){
            if (c == '1') c1++;
            else c0++;
        }
        if (c1 == 0){
            cout << 0 << endl;
            continue;
        }
        
        if (c0 == 1){
            cout << 1 << endl;
            for (int i = 0; i < n; i ++){
                if (s[i] == '0') {cout << i+1 << endl; break;}
            }
            continue;
        }
        if (c1%2 == 1 && c0%2 == 0) {
            cout << -1 << endl;
            continue;
        }
        if (c1 % 2 == 0){
            cout << c1 << endl;
            for (int i = 0; i < n; i ++){
                if (s[i] == '1') cout << i+1 << " ";
            }
        }
        else {
            cout << c0 << endl;
            
            for (int i = 0; i < n; i ++){
                if (s[i] == '0') cout << i+1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}