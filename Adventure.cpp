#include <bits/stdc++.h>

using namespace std;
int dp [1010][1010];
int val [1010];
int w [1010];

int knap_sack(int i,int max_w){
    if (i < 0 || max_w <= 0) return 0;
    if (dp[i][max_w]!=-1) return dp[i][max_w];
    if (w[i] <= max_w){
        int op1 = knap_sack(i-1,max_w-w[i]) + val[i];
        int op2 = knap_sack(i-1, max_w);
        dp[i][max_w] = max(op1,op2);
        return dp[i][max_w];
    }
    else {
        dp[i][max_w] = knap_sack(i-1, max_w);
        return dp[i][max_w];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n,max_w;
        cin >> n >> max_w;

        for (int i = 0; i < 1010; i ++){
            for (int j = 0; j < 1010 ; j ++){
                dp[i][j] = -1;
            }
        }
        
        for (int i = 0; i < n; i ++){
            int a;
            cin >> a;
            w[i] = a;
        }

        for (int i = 0; i < n; i ++){
            int a;
            cin >> a;
            val[i] = a;
        }

        cout << knap_sack(n-1,max_w) << endl;
        
    }
    return 0;
}