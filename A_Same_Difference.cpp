#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (char c : s){
            if (c == s[n-1]) count ++; 
        }
        cout << n - count << endl;
    }
}