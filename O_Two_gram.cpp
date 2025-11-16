#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string,int> mp;
    string s;
    cin >> s;
    for (int i = 0; i < n-1; i ++){
        string k = s.substr(i, 2);
        mp[k] += 1;
    }
    pair <string, int> s1 = {mp.begin()->first,mp.begin()->second};
    for (auto it : mp) {
        if (it.second > s1.second){
            s1 = {it.first,it.second};
        }
    }  
    cout << s1.first;  
    return 0;
}