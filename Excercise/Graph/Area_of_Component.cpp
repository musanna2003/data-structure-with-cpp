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

int dfs (int si, int sj){
    vis [si][sj] = true;
    int count = 1;
    for (int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] != '-'){
            count = count + dfs(ci,cj);
        }
    }
    return count;
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
    
    vector <int> v;

    for (int i = 0; i < m; i ++){
        for (int j = 0; j< n; j ++){
            if (!vis[i][j] && grid[i][j] == '.'){
                v.push_back(dfs(i,j));
            }
        }
    }

    
    sort(v.begin(),v.end());
    if (v.size() == 0) cout << -1;
    else cout << v.front();
    
    return 0;
}