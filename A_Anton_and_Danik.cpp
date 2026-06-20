#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;
    int ca = 0, cd = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'A') ca++;
        else cd++;
    }
    
    if (ca > cd) cout << "Anton" << endl;
    else if(cd > ca) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}