#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        while(n--){
            int val; cin >> val;
            cout << val + (val%(k+1)) * k << " ";
        }
        cout << endl;
    }

    return 0;
}