#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(n),b(n);
        map <int ,int> mp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]] = i;
        }

        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        bool f = 0;
        
        int k = 0;
        for (int i = 0; i < n-1; i++){
            if (mp[b[i]] > mp[b[i+1]]){
                f = 1;
            }
        }
        cout << (f? "NO":"YES") << endl;
    }

    return 0;
}