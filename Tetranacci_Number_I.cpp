#include <bits/stdc++.h>
using namespace std;

long long dp[40] ;
int tetro(int n){
    if (n < 4) return dp[n];
    if (dp[n] != -1) return dp[n];
    dp[n] = tetro(n-1) + tetro(n-2) +tetro(n-3)+tetro(n-4);
    return dp[n];
}
int main() {
    memset(dp,-1,sizeof(dp));
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    int n;
    cin >> n;
    cout << tetro(n);
    return 0;
}