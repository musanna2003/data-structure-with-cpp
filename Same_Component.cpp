#include <bits/stdc++.h>

using namespace std;
char grid [1010][1010];
bool vis [1010][1010];
vector <pair <int,int>>d = {{-1,0},{1,0},{0,-1},{0,1}};
int m,n;

bool valid (int i, int j ){
    if (i < 0 || i >= m || j < 0 || j >= n){
        return false;
    }
    return 1;
}


void dfs (int si, int sj){
    vis [si][sj] = true;
    for (int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci,cj) && !vis[ci][cj] && grid[si][sj]!='-' ){
            dfs(ci,cj);
        }
    }

}



int main()
{
    memset(vis,false,sizeof(vis));
    
    cin >> m >> n;
    
    pair <int,int> at;
    for (int i = 0; i < m; i ++){
        for (int j = 0; j< n; j ++){
            cin >> grid[i][j] ;
        }
    }

    int a,b,c,d;
    cin >>a >> b;
    dfs(a,b);
    cin >> c >> d;
    if (vis[c][d]) cout << "YES";
    else cout << "NO";

    return 0;
}