#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n),dp(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        
        int bc = 0;
        int l = 1,r = 1;
        for (int i = 0;i < n; i++){
            int cg = 0,cl = 0;
            for (int j = i+1; j < n; j ++){
                if(v[i] > v[j]) cl ++;
                if(v[i] < v[j]) cg ++;
                if (bc > cg - cl){
                    bc = cg-cl;
                    l = i+1; r = j+1;
                }
            }
        }
        cout << l << " " << r << endl;
    }
    return 0;
}