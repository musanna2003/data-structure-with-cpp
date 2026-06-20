#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin>> n >> k;
        string s; cin >> s;

        int c0 = 0, c1 = 0, c2 = 0;
        for (auto ch : s) {
            if (ch == '0') c0++;
            else if(ch == '1') c1++;
            else c2 ++;
        }
        int m = n - (c1 + c0);
        int pls = max(0,m - (2*c2));
        int q = min(m,2*c2);
        

        for (int i = 0; i < c0; i++) cout << '-';
        if (c2 == m){
            for (int i = 0; i < c2; i++) cout << '-';
        }
        else{
            for (int i = 0; i < q/2; i++) cout << '?';
            for (int i = 0; i < pls; i++) cout << '+';
            for (int i = 0; i < (q+1)/2; i++) cout << '?';
        }
        for (int i = 0; i < c1; i++) cout << '-';
        cout << endl;
    }

    return 0;
}