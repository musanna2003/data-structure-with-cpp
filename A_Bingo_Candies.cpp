#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <int,int> mp;
        bool f = 1;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                int val; cin >> val;
                mp[val] ++;
            }
        }

        for (auto it : mp){
            if (it.second > (n)*(n) - n){
                f = false;
                break;
            }
        }

        cout << (f? "YES" : "NO") << endl;
    }

    return 0;
}