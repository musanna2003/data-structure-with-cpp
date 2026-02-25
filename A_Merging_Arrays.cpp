#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    vector <long long> vn (n);
    vector <long long> vm (m);

    for (int i = 0; i < n; i ++){
        cin >> vn[i];
    }

    for (int i = 0; i < m; i ++){
        cin >> vm[i];
    }

    int pn = 0, pm = 0;
    while (pm < m || pn < n){
        if ( pm >= m ){
            cout << vn[pn] << " ";
            pn++;
        }
        else if ( pn >= n ){
            cout << vm[pm] << " ";
            pm++;
        }
        else if (vn[pn] < vm[pm] ){
            cout << vn[pn] << " ";
            pn ++;
        }
        else {
            cout << vm[pm] << " ";
            pm ++;
        }
    }
    cout << endl;
    return 0;
}