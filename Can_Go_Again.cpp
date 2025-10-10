#include <bits/stdc++.h>

using namespace std;
int n;
int dis[1009];
class edge{
    public:
    int a;
    int b;
    int w;
    edge(int d, int e, int f){
        a = d;
        b = e;
        w = f;
    }
};

vector <edge> edge_list;

void bellman_ford(){
    for (int i = 0; i < n-1; i ++ ){
        for (auto e : edge_list){
            int a,b,c;
            a = e.a;
            b = e.b;
            c = e.w;
            if (dis[a] != INT_MAX && dis[a]+c < dis[b] ){
                dis[b] = dis[a]+c;
            }
        }
    }
}


int main()
{
    for ( int i = 0; i < 1009; i ++){
        dis[i] = INT_MAX;
    }
    int m;
    cin >> n >> m;
    for ( int i = 0; i < m; i ++){
        int a,b,c;
        cin >> a >> b >> c;
        edge_list.push_back(edge(a,b,c));
    }
    
    int target;
    cin >> target;
    dis[target] = 0;

    bellman_ford();
    
    int test;
    cin >> test;
    while (test--){
        int x;
        cin >> x;
        if (dis[x] == INT_MAX) cout << "Not Possible" << endl;
        else {
            cout << dis[x] << endl;
        }
    }
    return 0;
}