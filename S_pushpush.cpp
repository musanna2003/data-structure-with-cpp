#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n = t;
    list <int> l;
    bool f = 1;
    while (t--){
        int val;
        cin >> val;
        if (f){
            l.push_back(val);
            f = !f;
        }
        else{
            l.push_front(val);
            f = !f;
        }
    }

    if (n%2 == 1){
        l.reverse();
    }

    for (int v : l){
        cout << v << " ";
    }
    return 0;
}