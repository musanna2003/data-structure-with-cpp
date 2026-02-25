#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int > v(n+1,0);
        

        for (int i = 1; i <= n; i++){
            cin >> v[i];
        }
        bool mf = 1;
        for (int i = 1; i <= n; i++){
            int seed = min(i,v[i]);
            bool f = 0;
            while (seed <= max(i,v[i])){
                if (seed == max(i,v[i])) f = 1;
                seed *= 2;
            }
            if (!f){
                mf = 0;
                break;
            }
        }
        cout << (mf?"YES":"NO") << endl;
    }

    return 0;
}