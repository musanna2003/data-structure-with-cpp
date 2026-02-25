#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,k; cin >> n >> m >> k;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector <long long> l,r,d;
    for (int i = 0; i < m; i++){
        int a,b,c; cin >> a >> b >> c;
        l.push_back(a-1);
        r.push_back(b-1);
        d.push_back(c);
    }

    vector <long long> dif_d(m+2);
    for ( int i = 0; i < m+ 2; i ++){
        dif_d[i] = 0;
    }
    while (k--){
        int x,y; cin >> x >> y;
        x--;y--;
        dif_d [x] ++;
        dif_d [y+1] --; 
    }
    long long s_d = 0;
    for (int i = 0; i < m; i++){
        s_d += dif_d[i];
        d[i] = d[i]*s_d;
    }

    vector <long long> md;
    md.push_back(v[0]);
    for (int i = 1; i < n; i++){
        md.push_back(v[i] - v[i-1]);
    }
    md.push_back(0);

    for (int i = 0; i < m ; i ++){
        md[l[i]] += d[i];
        md[r[i]+1] -= d[i];
    }

    long long ms = 0;
    for (int i = 0; i < n; i ++){
        ms += md[i];
        cout << ms << " ";
    }
    return 0;
}