#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    map <long long,int> mp;
    while (n--){
        long long a,b; cin >> a >> b;
        mp[a] ++;
        mp[b+1] --;
    }

    int s = 0; bool f = 0;
    for (auto it : mp){
        s += it.second;
        if (s > 2) {f =1; break;}
    }
    cout << (f? "NO\n":"YES\n");
    return 0;
}