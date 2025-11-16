#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> mp;
    while (n--){
        int a,b,c;
        cin >> a >> b >> c;
        if (a*b < c*2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}