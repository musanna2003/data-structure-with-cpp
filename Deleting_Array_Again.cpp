#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(n),c(n);
        for (int i = 0; i< n; i++){
            cin >> a[i];
        }
        for (int i = 0; i< n; i++){
            cin >> c[i];
        }

        long long cst = 0;
        int last = n;
        while(last > 0){
            int k = 0, j = 0;
            while(j < last ){
                if (c[k] > c[j]) k = j;
                j++;
            }
            for (int i = k ; i< last;i++){
                cst += c[k]*a[i];
            }
            last = k;
        }
        cout << cst << endl;
    }

    return 0;
}