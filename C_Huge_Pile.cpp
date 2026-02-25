#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        
        int count = 0;
        bool f = 0;

        if (n == k){
            cout << 0 << endl; continue;
        }

        while (n > k){
            count ++;
            // cout << n << " " ;
            long long n1 = n/2;
            long long n2 = (n+1)/2;
            if ( n1 == k || n2 == k){
                f = 1;
                break;
            }
            if (n1%2 == 1){
                n = n1;
            }
            else if (n2%2 == 1){
                n = n2;
            }
            else {
                n = n2;
            }
        }
        
        cout << (f? count : -1) << endl;
    }

    return 0;
}