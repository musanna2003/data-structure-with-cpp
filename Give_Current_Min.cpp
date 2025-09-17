#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue <int,vector<int>,greater<int>> pq;
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        pq.push(val);
    }

    int test;
    cin >> test;
    for (int t = 0; t < test; t++){
        int qry;
        cin >> qry;
        if (qry == 0){
            int q2;
            cin >> q2;
            pq.push(q2);
            if(!pq.empty()) cout << pq.top() << endl;
            else {
                cout << "Empty" << endl;
            }
        }
        else if (qry == 1){
            if(!pq.empty()) cout << pq.top() << endl;
                else {
                    cout << "Empty" << endl;
                }
        }
        else if (qry == 2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()) cout << pq.top() << endl;
                else {
                    cout << "Empty" << endl;
                }
            }
            else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}