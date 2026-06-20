#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long k,n; cin >> k >> n;
        long long d = n/4;
        long long r = n%4;
        if (n == 0){
            cout << k << endl;
        }
        else if (k % 2 == 0){
            if (r == 1){
                cout << k + (-1 - (4*d)) << endl;
            }
            else if (r == 2){
                cout << k + 1 << endl;
            }
            else if (r == 3){
                cout << k + (4*(d+1)) << endl;
            }
            else if (r == 0){
                cout << k << endl;
            }
        }
        else{
            if (r == 1){
                cout <<  (2 + (4*d)) + (k - 1)<< endl;
            }
            else if (r == 2){
                cout << k - 1 << endl;
            }
            else if (r == 3){
                cout << (-3 - (4*d)) + (k - 1) << endl;
            }
            else if (r == 0){
                cout << k << endl;
            }
        }
    }

    return 0;
}