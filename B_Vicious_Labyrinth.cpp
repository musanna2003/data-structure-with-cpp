#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        for (int i = 1; i< n+1; i ++){
            if(k%2 == 0){
                if(i == n-1) cout << n;
                else cout << n-1;
            }
            else{
                if(i == n) cout << n-1;
                else cout << n;
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}