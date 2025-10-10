#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b;
    cin >> a >> b;
    long long h = (a+1)/2;
    if (b <= h){
        cout << 2*b-1;
    }
    else {
        cout << 2*(b-h);
    }
    
    return 0;
}