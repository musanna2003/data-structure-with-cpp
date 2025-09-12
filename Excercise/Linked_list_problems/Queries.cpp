#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int val;
        Node* next;
    Node(int val){
        this-> val = val;
        this -> next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if ( head == NULL){
        head = newNode;
        tail = head;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node* &head, Node* &tail, int val ){
    Node *newNode = new Node(val);
    if (head == NULL){
        head = newNode;
        tail = head;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void delete_from_any_idx(Node* &head, Node* &tail, int idx){
    if (head == NULL){
        return;
    }
    if (idx == 0){
        Node *tmp = head;
        head = head->next;
        if (head == NULL){
            tail = NULL;
        }
        delete tmp;
        return;
    }
    Node *tmp = head;
    for (int i =1; i < idx; i++){
        tmp = tmp->next;
        if (tmp == NULL){
            return;
        }
    }
    if (tmp->next==NULL){
        return;
    };
    if(tmp->next == tail){
        Node *deleteNode = tmp->next;
        tmp->next = NULL;
        tail = tmp;
        delete deleteNode;
    }
    else{
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
}


int main()
{
    // Write your code here
    int test;
    cin >> test;
    Node *head = NULL;
    Node *tail = NULL;
    for (int t = 0; t < test; t ++) {
        int v, q;
        cin >> q >> v;
        if (q == 0){
            insert_at_head(head,tail,v);
        }
        else if (q == 1){
            insert_at_tail(head,tail,v);
        }
        else if (q == 2){
            delete_from_any_idx(head,tail,v);
        }

        Node *tmp = head;
        while(tmp != NULL){
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
        cout << endl;

    }

    return 0;
}
