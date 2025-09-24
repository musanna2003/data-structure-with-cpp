#include <bits/stdc++.h>

using namespace std;

int m,n;
int vis[109][109];
int lvl[109][109];
vector <pair <int,int>> d = {{-2,-1},{-2,1}, {-1,-2}, {-1,2}, {1,-2}, {1,2}, {2,-1}, {2,1}};



bool valid (int i, int j){
    if(i<0 || i >= m || j<0 || j>=n) return false;
    return true;
}

void bfs(int si,int sj){
    queue <pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = 1;
    lvl[si][sj] = 0;
    while (!q.empty()){
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();
        for (int i =0; i < 8; i++){
            int ci = pi + d[i].first;
            int cj = pj + d[i].second;
            if (valid(ci,cj) && vis[ci][cj] == 0){
                q.push({ci,cj});
                vis[ci][cj] = 1;
                lvl[ci][cj] = lvl[pi][pj] + 1;
            }
        }
    }
}



int main()
{
    int t;
    cin >> t;
    while (t--){
        cin >> m >> n;
        memset(vis,0,sizeof(vis));
        memset(lvl,-1,sizeof(lvl));

        
        int i,j;
        cin >> i >> j;
        int ti, tj;
        cin >> ti >> tj;
        bfs(i,j);
        cout << lvl[ti][tj] << endl;
    }

    return 0;
}