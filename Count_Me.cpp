#include <bits/stdc++.h>

using namespace std;



int main()
{
    int test;
    cin >> test;
    cin.ignore();
    for (int t = 0; t < test; t ++){
        map <string,pair<int,int>>mp;
        string s;
        
        getline(cin, s);
        stringstream ss (s);
        string word;
        int pos = 0;
        while (ss >> word){
            pos ++;
            int val = mp[word].second +1;
            mp[word] = {pos,val};
        }
        pair <string,pair<int,int>> p;
        p = *mp.begin();
        for (auto it = mp.begin(); it != mp.end(); it ++){
            if (it->second.second >= p.second.second){
                if (it->second.second == p.second.second){
                    if (it->second.first > p.second.first) continue;
                }
                p = *it;
            }
        }
        cout << p.first << " " << p.second.second << endl;
    }

    return 0;
}
