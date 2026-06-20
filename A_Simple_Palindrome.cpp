#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <char> v = {'a','e','i','o','u'};
        int rm = n%5;
        int tm = n/5;

        for (int i = 0; i  < 5; i++){
            for (int j = 0; j < tm; j++){
                cout << v[i];
            }
            if (rm){
                cout << v[i];
                rm --;
            }
        }
        cout << endl;
    }

    return 0;
}