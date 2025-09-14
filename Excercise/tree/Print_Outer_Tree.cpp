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

void left_side_print(Node* root){
    if(root == NULL){
        return;
    }
    if(root->left){
        left_side_print(root->left);
    }
    else{
        left_side_print(root->right);
    }
    cout << root->val << " ";
}
void right_side_print(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->val << " ";
    if(root->right){
        right_side_print(root->right);
    }
    else{
        right_side_print(root->left);
    }
}


int main()
{
    Node *root = node_input();
    if (root->left) left_side_print(root->left);
    cout << root->val << " ";
    if (root->right) right_side_print(root->right);
}