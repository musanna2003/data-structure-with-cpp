#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        string s; cin >> s;

        int count = 0;
        int tmp = 0; 
        for (char c : s){
            if (tmp == 0 && c== '0') count ++;
            if (tmp > 0) tmp --;
            if (c == '1'){
                tmp = k;
            }
        }
        cout << count << endl;
    }

    return 0;
}