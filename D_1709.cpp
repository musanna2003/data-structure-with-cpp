#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> a(n),b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        auto srt = [&](vector <long long> &a){
            vector <long long> vt;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n-i-1; j ++){
                    if(a[j] > a[j+1]){
                        swap(a[j],a[j+1]);
                        vt.push_back(j+1);
                    }
                }
            }
            return vt;
        };

        vector <long long> v1,v2,v3;
        v1 = srt(a);
        v2 = srt(b);

        for (int i = 0; i < n; i++){
            if (a[i] > b[i]) v3.push_back(i+1);
        }

        cout << v1.size() + v2.size() + v3.size() << endl;
        for (auto it : v1) cout << 1 << " " << it << endl;
        for (auto it : v2) cout << 2 << " " << it << endl;
        for (auto it : v3) cout << 3 << " " << it << endl;

    }

    return 0;
}