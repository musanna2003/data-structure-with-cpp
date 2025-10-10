#include <bits/stdc++.h>
using namespace std;


int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i ++){
        string val;
        cin >> val;
        if (i%2 == 0){
            cout << val << endl;
        }
    }
    return 0;
}