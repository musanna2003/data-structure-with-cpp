#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        long long a,b,n;
        cin >> a >> b >> n;
        if (b * n > a && b < a) cout << 2 << endl;
        else cout << 1 << endl; 
    }
}