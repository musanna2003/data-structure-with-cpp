#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        string rs = "";
        for (char ch : s){
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') rs = rs + "1";
            else rs = rs + "0";
        }
        
        if (rs == "01010100") cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}