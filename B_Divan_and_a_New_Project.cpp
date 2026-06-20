#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <pair<int,int>> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i].first;
            v[i].second = i+1;
        }

        sort(v.rbegin(),v.rend());
        long long cnt = 0;
        int j = 0;
        for (int i = 0; i < n; i++){
            if (i % 2 == 0) {
                if (j >= 0) j++;
                else j--;
            }
            else j *= -1;

            cnt += 1ll * v[i].first * abs(j) * 2;
            v[i].first = j;
            swap(v[i].first,v[i].second); 
        }
        sort(v.begin(),v.end());
        cout << cnt << endl << 0 << " ";
        for (int i = 0; i < n; i++) {
            cout << v[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}