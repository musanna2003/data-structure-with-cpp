#include <bits/stdc++.h>
using namespace std;

int sm (long long a){
    int rs = 0;
    while (a > 0){
        rs += a %10;
        a = a/10;
    }
    return rs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        int cnt = 0;
        for (long long i = n+1; i <= n+81; i++){
            if (i - sm(i) == n){
                cnt ++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}