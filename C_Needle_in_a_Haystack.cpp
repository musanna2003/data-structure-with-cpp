#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s1; cin >> s1;
        string s2; cin >> s2;

        map <char,int> mp1,mp2;

        for (char c : s1){
            mp1[c] ++;
        }

        for (char c : s2){
            mp2[c] ++;
        }

        bool f = 0;
        for (auto it : mp1){
            if (it.second > mp2[it.first]) {
                f = 1;
                
            }
            mp2[it.first] -= it.second;
        }
        
        int x = 0;
        if(f) cout << "Impossible\n";
        else {
            for (auto it : mp2){
                if (it.first == s1[x]){
                    while (x < s1.size() && s1[x] <= it.first){
                        cout << s1[x]; x ++;
                    }
                }
                for (int i= 0; i < it.second; i++){
                    cout << it.first;
                }
            }
            cout << endl;
        }
    }

    return 0;
}