#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int m,n;
    cin >> m >> n;
    vector<int> adj_list[m];
    for (int i = 0; i < n; i ++){
        int a,b;
        cin >> a>> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int test;
    cin >> test;
    for (int t = 0; t < test; t++){
        int c;
        cin >> c ;
        
        if (adj_list[c].size() == 0){
            cout << -1 << endl;
            continue;
        }
        sort(adj_list[c].begin(),adj_list[c].end(),greater<int>());
        for( int v : adj_list[c]){
            cout << v << " ";
        }
        cout << endl;

    }

    return 0;
}