#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int > v;
    for (int i = 0; i < n; i ++){
        int val;
        cin >> val;
        v.push_back(val);
    }

    int c1 = 0;
    int c2 = 0;
    int l = 0;
    int r = n-1;
    while (true){
        if (v[l] > v[r]) {
            c1 += v[l];
            l ++;
        }
        else{
            c1 += v[r];
            r--;
        }
        if (r < l) break;
        if (v[l] > v[r]) {
            c2 += v[l];
            l ++;
        }
        else{
            c2 += v[r];
            r--;
        }
        if (r < l) break;
    }
    cout << c1 <<' ' << c2;
    return 0;
}