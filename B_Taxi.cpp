#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector <int> ref={0,0,0,0};
    for (int i =0; i < n; i++){
        int val; cin >> val;
        ref[val-1] ++;
    }
    cout << ref[3] + ref[2] +  ref[1]/2 + ref[1]%2 + (ref[0] - ref[2] - (2*(ref[1]%2)) > -1?(ref[0] - ref[2] - (2*(ref[1]%2)) + 3)/4 :0);

    return 0;
}