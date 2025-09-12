#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    list <int> l;

    while (true){
        int val;
        cin >> val;
        if (val == -1){
            break;
        }
        l.push_back(val);
    }

    l.sort();

    int i = 0;
    while(true){
        if (next(l.begin(), i+1) == l.end()){
            break;
        }
        else if (*next(l.begin(),i) == *next(l.begin(),i+1)){
            l.erase(next(l.begin(),i+1));
        }
        else {
            i ++;
        }
    }

    for (int v : l){
        cout << v << " "; 
    }
    

    return 0;
}