#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int c0 = 0;
        for (int i = 0; i <n; i++){
            if (s[i] == '0') c0++;
        }

        cout << c0 << endl;
        if (c0 == 0 ) continue;
        for (int i = 0; i <n; i++){
            if (s[i] == '0') cout << i +1 << " ";
        }
        cout << endl;
        
    }

    return 0;
}