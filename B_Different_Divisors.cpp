#include <bits/stdc++.h>
using namespace std;

int n_p (int a){
    int w = 100000;
    while (w--){
        bool f = 1;
        for (int i = 2;i*i <= a; i++){
            if (a % i == 0){
                f = 0;
                break;
            }
        }
        if (f) return a;
        a++;
    }
    return 0;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        int a = 1;
        int b = n_p(a+n);
        int c = n_p(b+n);

        cout << lcm(b,c) << endl;
        
    }

    return 0;
}