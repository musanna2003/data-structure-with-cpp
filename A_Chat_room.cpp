#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    string ref = "hello";
    int pt = 0;

    for (int i = 0; i < s.size(); i ++){
        if (s[i] == ref[pt]){
            pt ++;
        }
        if (pt > 4) break;
    }

    if (pt > 4) cout << "YES" ;
    else cout << "NO";
    cout << endl;

    return 0;
}