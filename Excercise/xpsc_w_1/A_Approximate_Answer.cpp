#include <bits/stdc++.h>
using namespace std;


int main() {
    int a,b,k;
    cin >> a >> b >> k;
    if (abs(a-b) <= k){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}