#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n){
    if (n == 2) return 1;
    for (int i = 2; i <= sqrt(n); i ++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    if (is_prime(n)) cout << 1;
    else if (n % 2 == 0 || is_prime(n-2) ) cout << 2;
    else cout << 3;
    cout << endl;

    return 0;
}