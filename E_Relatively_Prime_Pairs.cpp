#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long l,r; cin >> l >> r;
    cout << "YES\n";
    for (int i = 0; i < (r-l+1); i += 2){
        cout << l + i << " " << l + i + 1;
        cout << endl;
    }

    return 0;
}