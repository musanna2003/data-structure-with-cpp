#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; 
    cin >> n;
    vector <int> v;
    while (n--){
        int val;
        cin >> val;
        v.push_back(val);
    }
    map <int,pair<int,int>> mp;
    for (int i = 0; i < n ; i ++){
        if (!mp.count(v[i])){
            mp[v[i]] = {i,i};
        }
        else{
            mp[v[i]] = {mp[v[i]].first,i};
        } 
    }
    
    for (auto it = mp.begin(); it != mp.end(); it ++){
        cout << it->first << it->second.first << it->second.second << endl;
    }
    
    return 0;
}