#include <bits/stdc++.h>

using namespace std;
int adj_mat[110][110];


int main()
{
    for(int i =0; i < 110; i ++){
        for (int j =0; j < 110; j ++){
            if (i == j){
                adj_mat[i][j] = 0;
            }
            else {
                adj_mat[i][j] = INT_MAX;
            }
        }
    }
    int n,e;
    cin >> n >> e;
    while (e--){
        int a,b,w;
        cin >> a >> b >> w;
        if (adj_mat[a][b]>w){
            adj_mat[a][b] = w;
        }
    }

    for (int k =1; k <= n; k ++){
        for (int i =1; i <= n; i ++){
            for (int j =1; j <= n; j ++){
                if (adj_mat[i][k] != INT_MAX &&
                    adj_mat[k][j] != INT_MAX &&
                    adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]){
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }

    int test;
    cin >> test;
    while (test --){
        int e,f;
        cin >> e >> f;
        cout << adj_mat[e][f] << endl;
    }
    
    return 0;
}
