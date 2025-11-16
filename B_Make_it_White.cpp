#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0;
        int b = n-1;
        for (int i = 0; i < n; i ++){
            if (s[i] == 'B') {
                a = i; 
                break;
            } 
        }
        for (int j = 1; j <= n; j ++){
            if (s[n-j] == 'B') {
                b = n-j;
                break; 
            }
        }
        cout << b - a +1  << endl;

        
    }
    
    
    return 0;
}