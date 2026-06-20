#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;
    bool f = 0;
    int i = 0;
    for (; i < n-1; i++){
        if (s[i] > s[i + 1]){
            f = 1;
            break;
        }
    }
    if(f) cout << "YES" << endl << i + 1 << " " << i + 2 << endl;
    else cout << "NO" << endl; 

    return 0;
}