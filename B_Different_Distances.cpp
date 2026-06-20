#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        
        int n; cin>> n;
        vector <int> v0,v1;
        v1 = {1,1,2,1,2,3,1,3,2,2,3,3};
        v0 = {1,2,1,2,2,1,1,2};
        int r = 0;

        if (n%2 == 1){
            for (auto it : v1) cout << it << " ";
            r += 3;
            for (int i = 0; i < n-3; i += 2){
                for (auto it : v0) cout << it + r << " ";
                r += 2;
            }
        }
        else{
            for (int i = 0; i < n; i += 2){
                for (auto it : v0) cout << it + r << " ";
                r += 2;
            }
        }
        cout << endl;
    }

    return 0;
}