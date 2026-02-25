#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s = to_string(n);

    bool f = 0;
    for (char c : s){
        if (c =='7' || c == '4' ){
            continue;
        }
        else f = 1;
    }

    if (!f){
        cout << "YES\n";
    }

    else if (n % 7 == 0 || n % 4 == 0 || n % 74 == 0 || n % 47 == 0 || n % 447 == 0 || n % 474 == 0 ){
        cout << "YES\n";
    }
    else cout << "NO\n";

    return 0;
}