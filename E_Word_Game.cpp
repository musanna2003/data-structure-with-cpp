#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        map <string,vector<int>> mp;
        for (int i = 1; i < 4; i ++){
            for(int j =0; j < n ; j++){
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        map <int,int> mp2;
        mp2[1] = 0;
        mp2[2] = 0;
        mp2[3] = 0;
        for (auto i = mp.begin(); i != mp.end(); i ++){
            if(i->second.size() == 2){
                mp2[i->second[0]] += 1;
                mp2[i->second[1]] += 1;
            }
            else if (i->second.size() == 1){
                mp2[i->second[0]] += 3;
            }
        }

        for (auto i = mp2.begin(); i != mp2.end(); i ++){
            cout << i->second << " ";
        }
        cout << endl;
    }
    return 0;
}