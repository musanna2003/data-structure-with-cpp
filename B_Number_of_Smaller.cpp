#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    vector <int> a(n);
    vector <int> b(m);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    int cnt = 0;
    int r = 0;
    for (int i = 0 ; i < m ; i ++){
        while (r < n && b[i] > a[r]){
            cnt ++; r ++;
        }
        cout << cnt << " ";
    }

    return 0;
}