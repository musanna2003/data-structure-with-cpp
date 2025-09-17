#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string,int> l,pair<string,int> r) {
    if (l.first > r.first) return false;
    else if (l.first == r.first){
        if (l.second > r.second) return 1;
        else return 0;
    }
    else return true;
}


int main()
{
    int test;
    cin >> test;
    vector <pair<string,int>> v;
    for (int i = 0; i < test; i ++){
        string name;
        int id;
        cin >> name >> id;
        v.push_back({name,id});
    }

    sort(v.begin(),v.end(),cmp);
    for (auto i : v){
        cout << i.first << " " << i.second << endl;
    }


    return 0;
}
