#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        char prev = s[0];
        cout << s[0];
        if (s.size()==1){
            if (s[0] == 'z'){
                cout << 'y';
            }
            else{
                cout << (char)(s[0] + 1);
            }
            cout << endl;
            continue;
        }
        int f = 1; 
        for (int i = 1; i  < s.size(); i ++){
            if (f && s[i] == prev){
                f = 0;
                if (s[i] == 'z'){
                    cout << 'y';
                }
                else{
                    cout << (char)(s[i] + 1);
                }
            }
            cout << s[i];
            prev = s[i];
        }
        if (f) {
            if (s[s.size()-1] == 'z'){
                cout << 'y';
            }
            else{
                cout << (char)(s[s.size()-1] + 1);
            }
        }
        cout << endl;
    }
    return 0;
}