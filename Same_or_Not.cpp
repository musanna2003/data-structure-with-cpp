#include <bits/stdc++.h>

using namespace std;



int main()
{
    int m,n;
    cin >> m >> n;
    if (m!=n){
        cout << "NO";
    }
        
    else{
        stack <int> st;
        queue <int> q;
        for (int i = 0; i < m; i ++){
            int val;
            cin >> val;
            st.push(val);
        }
        for (int i = 0; i < n; i ++){
            int val;
            cin >> val;
            q.push(val);
        }
        int flag = 0;
        while(!st.empty() || !q.empty()){
            if (st.top()!= q.front()){
                flag = 1;
                break;
            }
            st.pop();
            q.pop();
        }
        if(flag){
            cout << "NO";
        }
        else{
            cout << "YES";
        }
    }

    return 0;
}