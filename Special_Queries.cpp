#include <bits/stdc++.h>

using namespace std;



int main()
{
    int test;
    cin >> test;
    queue <string> q;
    for (int t = 0 ; t < test; t ++){
        string s;
        int v;
        cin >> v;
        if (v == 0){
            cin >> s;
            q.push(s);
        }
        else{
            if (!q.empty()){
                cout << q.front() << endl;
                q.pop();
            } 
            else cout << "Invalid" << endl;
        }
    }

    return 0;
}