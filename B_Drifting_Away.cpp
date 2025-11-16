#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        bool f = 1;
        int n = s.size();
        vector <int> cnt;
        int count = 0;
        for ( int i = 0; i < n; i ++){
            count ++;
            if (i<n-1 && s[i] == '>' && s[i+1] == '<' || s[i] == '*' && s[i+1] == '*' || s[i] == '*' && s[i+1] == '<' || s[i] == '>' && s[i+1] == '*'){
                cout << -1 << endl;
                f = 0;
                break;
            }
            if (i<n-1 && (s[i] == '<' && s[i+1] == '>')){
                cnt.push_back(count);
                count = 0;
                continue;
            }
            if (i<n-1 && (s[i] == '<' && s[i+1] == '*')){
                cnt.push_back(count+1);
                count = 0;
                continue;
            }
        }
        cnt.push_back(count);
        sort(cnt.begin(),cnt.end(), greater<int>());
        if(f) cout << cnt[0] << endl;
    }
}