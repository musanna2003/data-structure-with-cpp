#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a (n);
        vector < int > b (n);
        for (int i = 0; i < n ; i++){
            cin >> a[i]; 
        }
        for (int i = 0; i < n ; i++){
            cin >> b[i]; 
        }

        if (a == b) {
            cout << "Yes\n";
            continue;
        }
        bool f = 1;
        for (int i = 0; i < n-1 ; i++){
            if (!((a[i] < a[i+1]) && (b[i] < b[i+1]) || (a[i] > a[i+1]) && (b[i] > b[i+1]))){
                f = 0;
                break;
            }
            
        }
        cout << (f? "Yes\n":"No\n");
    }

    return 0;
}