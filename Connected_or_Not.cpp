#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int m,n;
    cin >> m >> n;
    int adj_list[m][m];
    memset(adj_list,0,sizeof(adj_list));
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < m; j ++){
            if (i == j) adj_list[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i ++){
        int a,b;
        cin >> a>> b;
        adj_list[a][b] = 1;
    }

    int test;
    cin >> test;
    for (int t = 0; t < test; t++){
        int c,d;
        cin >> c >> d;
        if (adj_list[c][d]==1){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }

    return 0;
}