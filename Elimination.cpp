#include <bits/stdc++.h>

using namespace std;



int main()
{
    int test;
    cin >> test;
    for (int t = 0 ; t < test; t ++){
        string s;
        cin >> s;
        queue <char> q;
        int flag = 1;
        for (char ch : s){
            if (ch == '0' ){
                q.push(ch);
            }
            else {
                if (!q.empty()){
                    q.pop();
                } 
                else flag = 0;
            }
        }
        if (q.size() == 0 && flag){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}