#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        right = NULL;
        left = NULL;
    }
};

Node* node_input(){
    int v;
    cin >> v;
    if (v == -1) return NULL;
    Node* root = new Node(v);
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *p = q.front();
        q.pop();
        int tl,tr;
        cin >> tl >> tr ;
        if(tl != -1){
            p->left = new Node(tl);
            q.push(p->left);
        } 
        else p->left = NULL;
        
        if(tr != -1){
            p->right = new Node(tr);
            q.push(p->right);
        }
        else p->right = NULL;
        
    }
    return root;
}

void print_tree(Node *root, int x){
    queue <pair <Node *,int>>  q;
    int lvl = 0;
    q.push({root,lvl});
    bool f = true;
    while(!q.empty()){
        if (q.front().second == x ){
            cout << q.front().first->val << " ";
            f = false;
        }
        if(q.front().first->left) q.push({q.front().first->left,q.front().second+1});
        if(q.front().first->right) q.push({q.front().first->right,q.front().second+1});
        q.pop();
    }
    if (f) cout << "Invalid";
}



int main()
{
    Node *root = node_input();
    int x;
    cin >> x;
    print_tree(root,x);
}