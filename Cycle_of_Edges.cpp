#include <bits/stdc++.h>

using namespace std;
int par[100010];

int dsu_find (int node){
    if (par[node]== -1) return node;

    int leader = dsu_find(par[node]);
    par[node]= leader;
    return leader;
}

int dsu(int node1, int node2){
    int leader1 = dsu_find(node1);
    int leader2 = dsu_find(node2);
    if (leader1 == leader2 && leader1 != -1){
        return 1;
    }
    par[leader2] = leader1;
    return 0;
}

int main()
{
    memset(par,-1,sizeof(par));
    int m,n;
    cin >> m >> n;
    int count = 0;
    while(n--){
        int a,b;
        cin >> a >>b;
        count += dsu(a,b);
    }
    cout << count;
    return 0;
}