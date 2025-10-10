#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int f = 1;
    int siz = s.size();
    int arr[siz] = {0};
    for (char c : s){
        arr[c - 'a'] = 1;
    } 
    for (int i =0; i < siz; i ++){
        if (arr[i]== 0){
            cout << char('a' + i);
            f = 0;
            break;
        }
    }
    if (f) cout << "None";
    
    return 0;
}