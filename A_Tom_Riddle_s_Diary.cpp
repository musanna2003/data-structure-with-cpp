#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> mp;
    while (n--){
        string s;
        cin >> s;
        if (mp.count(s)) cout << "YES\n";
        else {
            mp[s] = 1;
            cout << "NO\n";
        }
    }
    return 0;
}