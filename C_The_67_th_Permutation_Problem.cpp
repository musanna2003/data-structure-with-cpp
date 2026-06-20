#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        n *= 3;
        vector <int> v(n,0);
        int j = n;
        int cnt = 0;
        for (int i = n-1; i >= 0; i --){
            if (cnt == 2) {
                cnt = 0; 
                continue;
            }
            v[i] = j;
            j --;
            cnt ++;
        }
        int x = 1;
        for (int i = 0; i < n; i++){
            if (v[i] == 0) v[i] = x++;
        }

        for (int i = 0; i < n; i++) cout << v[i] << ' ';
        cout << endl;
    }

    return 0;
}