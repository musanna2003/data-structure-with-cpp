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
        long long cnt = 0;
        for (int i = 0; i < n; i++){
            if (a[i] < b[0]) a[i] = b[0];
        }
        for (int i = 0; i < n; i++){
            int j = i;
            for (; j < n; j ++){
                if(a[j] <= b[i]) break;
            }
            if (j == n){
                cnt = -1;
                break;
            }
            while (i < j) {
                swap(a[j],a[j-1]);
                cnt ++;
                j --;
            }
        }
        // for (int i = 0; i < n; i++){
        //     if (a[i] > b[i]) cnt = -1;
        // }
        cout << cnt << endl;
    }

    return 0;
}