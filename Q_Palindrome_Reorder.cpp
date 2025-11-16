#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map <char,int> mp;
    for (char c : s){
        mp[c] += 1;
    }
    
    int odd = 0;
    for ( auto it : mp){
        if (it.second % 2 ==1) odd ++;
    }

    if (odd > 1) {
        cout << "NO SOLUTION\n";
    }
    else{
        deque <char> l;
        deque <char> m;
        deque <char> r;
        for ( auto it : mp){
            if (it.second % 2 == 1) {
                for (int i = 0; i < it.second; i ++){
                    m.push_back(it.first);
                }
            }
            else {
                for (int i = 0; i < it.second/2; i ++){
                    l.push_back(it.first);
                    r.push_front(it.first);
                }
            }
        }

        for (char c : l){
            cout << c ;
        }
        for (char c : m){
            cout << c ;
        }
        for (char c : r){
            cout << c ;
        }
    }
    return 0;
}