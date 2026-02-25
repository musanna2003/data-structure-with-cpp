#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++){
            int val; cin >> val;
            sum += val;
        }
        cout << (sum > -1? 0 : (abs(sum)+n-1)/n) << endl;
    }

    return 0;
}