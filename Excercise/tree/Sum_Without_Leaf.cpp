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

int sum_of_parents_Node(Node * root){
    if (root == NULL) return 0;
    if ((root->left == NULL) && (root->right== NULL) ){
        return 0;
    }
    int l = sum_of_parents_Node(root->left);
    int r = sum_of_parents_Node(root->right);
    return root->val + l + r;
}


int main()
{
    cout << sum_of_parents_Node(node_input());
    return 0;
}