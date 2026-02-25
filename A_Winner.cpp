#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map <string,int> mp;
    vector <pair<string,int>> vc;
    
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        int val ; cin >> val;
        mp[s] += val;
        vc.push_back({s,val});
    }

    int mx = INT_MIN;
    for (auto it : mp){
        if (it.second>mx) mx = it.second;
    }
    unordered_map <string,int> mp2;
    for (auto it : vc){
        mp2[it.first] += it.second;
        if(mp2[it.first]>= mx && mp[it.first]== mx) {
            cout << it.first << endl;
            break;
        } 
    }

    return 0;
}