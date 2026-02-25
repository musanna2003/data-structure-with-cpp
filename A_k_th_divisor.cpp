#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k; cin >> n >> k;

    long long rt = sqrt(n);

    vector <long long> v;
    for (int i = 1; i <= rt; i ++){
        if (n % i == 0){
            v.push_back(i);
            if ( i != n/i) v.push_back(n/i);
        }
    }

    sort (v.begin(),v.end());
    cout << (k > (int)v.size()? -1:(v[k-1])) << endl;

    return 0;
}