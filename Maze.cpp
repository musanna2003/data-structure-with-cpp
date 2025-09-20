#include <bits/stdc++.h>

using namespace std;
char grid [1010][1010];
bool vis [1010][1010];
vector <pair <int,int>>d = {{-1,0},{1,0},{0,-1},{0,1}};
pair<int,int> parent[1010][1010];
int m,n;

bool valid (int i, int j ){
    if (i < 0 || i >= m || j < 0 || j >= n){
        return false;
    }
    return 1;
}

int flag =0;

pair<int,int> bfs (int si, int sj){
    vis [si][sj] = true;
    queue <pair<int,int>> q;
    q.push({si,sj});
    
    while(!q.empty()){
        pair <int,int> par = q.front();
        q.pop();
        for (int i = 0; i < 4; i++){
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]!='#' ){
                q.push({ci,cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {par.first,par.second};
                if (grid[ci][cj]=='D') return {ci,cj};
            }
        }
    }
    return {-1,-1};

}



int main()
{
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < 1010; i++) {
        for (int j = 0; j < 1010; j++) {
            parent[i][j] = {-1, -1};
        }
    }
    cin >> m >> n;
    
    pair <int,int> at;
    for (int i = 0; i < m; i ++){
        for (int j = 0; j< n; j ++){
            cin >> grid[i][j] ;
            if (grid[i][j]=='R') at = {i,j};
        }
    }
    pair<int,int> pos_d = bfs(at.first,at.second);
    pair<int,int> t = {parent[pos_d.first][pos_d.second]};

    while (t.first != -1){
        grid[t.first][t.second] = 'X';
        t = parent[t.first][t.second];
    }
    {
        /* code */
    }
    
    cout << pos_d.first << pos_d.second << endl;

    for (int i = 0; i < m; i ++){
        for (int j = 0; j< n; j ++){
            cout << grid[i][j] ;
        }
        cout<< endl;
    }

    return 0;
}