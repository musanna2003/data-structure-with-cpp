#include <bits/stdc++.h>
using namespace std;

long long nCr(long long n) {
    if (n < 2) return 0;
    return n * (n - 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <string , long long> mp;
        for (int i = 0; i < n ; i ++){
            string s;
            cin >>s;
            mp[s]++;
        }

        map < char,pair<long long, long long>> mp1;
        map < char,pair<long long, long long>> mp2;
        for (auto &it : mp) {
            mp1[it.first[0]].first++;
            if (mp1[it.first[0]].second == 0) mp1[it.first[0]].second = 1; 
            mp1[it.first[0]].second *= it.second; 

            mp2[it.first[1]].first++;
            if (mp2[it.first[1]].second == 0) mp2[it.first[1]].second = 1; 
            mp2[it.first[1]].second *= it.second; 
        }

        unsigned long long sum = 0;

        for (auto it : mp1){
            sum = sum + (it.second.second*(nCr(it.second.first)));
        }

        for (auto it : mp2){
            sum = sum + (it.second.second*(nCr(it.second.first)));
        }

        cout << sum << endl;
    }

    return 0;
}