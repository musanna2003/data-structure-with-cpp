#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        int bit = 0;
        long long tm = n;
        while (tm > 0){
            bit ++;
            tm /= 2;  
        }
        vector <int> a(bit,0);
        int c = 0;
        for (int i = bit -1,j = 0; i >= 0 ; i --,j ++){
            a[i] = n >> j & 1;
        }
        if (n == 0){
            cout << "YES\n"; continue;
        }
        int i = 0, j = bit -1;
        while (a[i] == 0 ){
            i ++;
        }
        while (a[j] == 0 ) j --;
        bool f = 1;
        if ( (j - i + 1) % 2 == 1 &&a[(i+j)/2] == 1) f = 0; 
        while (i <= j){
            if (a[i] != a[j]) f = 0;
            j --; i ++;
        }

        

        // for (auto it : a) cout << it << " ";
        // cout << endl;

        cout << (f ? "YES" : "NO") << endl;
        
        
    }

    return 0;
}