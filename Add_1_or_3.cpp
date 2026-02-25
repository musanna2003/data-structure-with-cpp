#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t; cin >> t;
    while (t--) {
        long long n , t; cin >> n >> t;
        if (n % 2 == 0){
            if (t % 2 == 0 && t >= n && t <= 3*n){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        else if (n % 2 == 1){
            if (t % 2 == 1 && t >= n && t <= 3*n){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
    }


    return 0;
}