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

void print_tree(Node *root){
    queue <Node *>  q;
    q.push(root);
    while(!q.empty()){
        cout << q.front()->val << " ";
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()->right) q.push(q.front()->right);
        q.pop();
    }
}

int node_count (Node * root){
    if (root == NULL) return 0;
    if ((root->left == NULL) && (root->right== NULL) ){
        return 1;
    }
    int l = node_count(root->left);
    int r = node_count(root->right);
    return l + r + 1 ;
}

int tree_depth (Node * root){
    if (root == NULL) return 0;
    if ((root->left == NULL) && (root->right== NULL) ){
        return 1;
    }
    int l = tree_depth(root->left);
    int r = tree_depth(root->right);
    return max(l,r) + 1;
}


int main()
{
    Node *root = node_input();
    if (pow(2,tree_depth(root)) - 1 == node_count(root)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}