#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long count = 0;
        for (int i = 0; i < n; i++){
           if (s[i] == 'L'){
            count = count + i;
           } 
           else{
            count += n-i+1;
           }
        }
        cout << count << endl;
    }
    return 0;
}