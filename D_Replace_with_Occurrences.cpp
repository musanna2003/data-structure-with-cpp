#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <int,int> mp;
        vector <int> v;
        for (int i = 0; i < n; i++) {
            int val; cin >> val;
            mp[val] ++;
            v.push_back(val);
        }
        vector <int> a;

        int sm = 0;
        bool f = 1;
        for (auto it : mp){
            if (it.second % it.first != 0 || sm >= n){
                f = 0;
                break;
            }
            else{
                sm += it.second;
            }
        }

        if (!f || sm != n){
            cout << -1 << endl;
            continue;
        }

        map <int,pair<int,int>> mpp;
        int j = 0;
        for (auto it : mp){
            mpp[it.first] = {it.second,j};
            j += it.second/it.first;
        }

        for (int i = 0; i <n; i ++){
            if (mpp[v[i]].first%v[i] == 0) mpp[v[i]].second++;
            cout << mpp[v[i]].second << " ";
            mpp[v[i]].first--;
        }
        cout << endl;

    }

    return 0;
}