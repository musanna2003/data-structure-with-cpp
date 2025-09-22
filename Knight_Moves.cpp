#include <bits/stdc++.h>

using namespace std;

int adj_mat[109][109];
int m,n;
int par[109] = {-1};
int vis[109][109] ;
vector <pair <int,int>>d = {{-2,-1},{-2,1}, {-1,-2}, {-1,2}, {1,-2}, {1,2}, {2,-1}, {2,1}};



bool valid (int i, int j){
    if(i<0 || i >= m || j<0 || j>=n) return false;
    return true;
}

void bfs(int si,int sj){
    queue <pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = 1;
    while (!q.empty()){
        int pi = q.front().first;
        int pj = q.front().second;
        q.pop();
        for (int i =0; i < 8; i++){

        }
    }
}



int main()
{
    
    return 0;
}