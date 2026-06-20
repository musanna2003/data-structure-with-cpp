#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m,a,b,c; cin >> n >> m >> a >> b >> c;

        if (n > m){
            cout << m*c + ((n-m)*a) << endl;
        }
        else if (n < m){
            cout << n*c + ((m-n)*b) << endl;
        }
        else{
            cout << n * c << endl;
        }
    }

    return 0;
}