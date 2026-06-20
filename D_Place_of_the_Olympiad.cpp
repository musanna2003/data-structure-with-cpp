#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {

        long long n,m,k; cin >> n >> m >> k;

        long long pr = (k + n - 1)/n;
        long long pc = m - pr;
        // cout << " " << pr << endl;
        if (pc == 0){
            cout << m << endl;
        }
        else{
            cout << ( (pr + pc) / (pc + 1)) << endl;
        }
    }

    return 0;
}