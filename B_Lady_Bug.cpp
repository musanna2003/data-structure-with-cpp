#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string a,b; cin >> a >> b;

        int ao = 0, ae = 0, bo = 0, be = 0;

        for(int i = 0; i < n; i ++){
            if (a[i] == '1'){
                if(i % 2 == 0) ae++;
                else ao ++;
            }
        }
        for(int i = 0; i < n; i ++){
            if (b[i] == '0'){
                if(i % 2 == 0) be++;
                else bo ++;
            }
        }

        if(ao <= be && ae <= bo) cout << "YES" << endl;
        else cout <<  "NO" << endl;
    }

    return 0;
}