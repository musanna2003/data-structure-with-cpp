#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int m,n,l;
        cin >> n >> m >> l;
        vector <int> v;
        while (n--){
            int a,b;
            cin >> a >> b;
            if (b == l){
                v.push_back(a);
            }
        }
        if (v.empty() || v.size() < m ) {
            cout << -1 << endl;
            continue;
        }
        sort(v.begin(), v.end(), greater<int>());
        int count = 0;
        for (int i = 0; i < m; i ++){
            count += v[i];
        }
        cout << count << endl;

    }
    return 0;
}