#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    float count = 0;
    while (t --){
        float a,b;
        cin >> a >> b;
        count = count + (a*b);
    }
    cout << fixed << setprecision(3) << count;
}