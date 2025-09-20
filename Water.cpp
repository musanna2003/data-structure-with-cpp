#include <bits/stdc++.h>

using namespace std;


int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++){
        int n;
        cin >> n;
        priority_queue <pair<int,int>> pq;
        for (int i =0; i < n; i ++){
            long long v;
            cin >> v;
            pq.push({v,i});
        }
        int a = pq.top().second;
        pq.pop();
        int b = pq.top().second;
        if (a > b) swap(a,b);
        cout << a << " " << b << endl;

    }
    return 0;
}