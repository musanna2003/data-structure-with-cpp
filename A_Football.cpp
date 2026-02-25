#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int n = s.size();
    int cnt = 1;
    bool f= 1;
    for (int i = 1; i < n; i++){
        if (i == n-1){
            if (s[i] == s[i-1])
                cnt ++;
            if (cnt >= 7) f = 0;
            continue;
        }
        if (s[i] == s[i-1]){
            cnt ++;
        }
        else {
            if (cnt >= 7) f = 0;
            cnt = 1;
        }
    }
    cout << (f? "NO" : "YES") << endl;
    return 0;
}