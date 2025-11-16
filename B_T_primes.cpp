#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--){
        long long val;
        cin >> val;
        if (sqrt(val) == floor(sqrt(val))){
            if (sqrt(val)== 2 || (int)sqrt(val)%2 == 1){
                cout << "YES\n";
            }
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}