#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    long long n = 1000000000000;
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    while (t--){
        long long val;
        cin >> val;
        if (sqrt(val) == floor(sqrt(val))){
            if (isPrime[sqrt(val)]){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}