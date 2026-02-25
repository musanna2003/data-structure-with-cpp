#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;

    int cnt = 0;
    for (int i = 0;i < 30 ; i ++){
        if (((n >> i) & 1))cnt ++;
    }

    cout << cnt;

    return 0;
}