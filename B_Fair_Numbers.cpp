#include <bits/stdc++.h>
using namespace std;

bool is_t(long long x){
    vector <int> v;

    long long xx = x;
    while (xx > 0){
        if (xx % 10 != 0)v.push_back(xx%10);
        xx = xx/10;
    }

    for (int i = 0; i < v.size(); i ++){
        if (x%v[i] != 0) return 0;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;

        while(!is_t(n)){
            n++;
        }
        cout << n << endl;
    }

    return 0;
}