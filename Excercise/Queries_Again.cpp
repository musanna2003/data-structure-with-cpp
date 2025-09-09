#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    int val;
    Node* next = NULL;
    Node* prev = NULL;
    Node(int v){
        val = v;
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
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_idx(Node* &head, Node* &tail, int &size, int idx, int val){
    Node* newNode = new Node(val);
    if ( head == NULL){
        head = newNode;
        tail = head;
        size ++;
        return;
    }
    
    if (idx == 0){
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        size ++;
        return;
    }
    
    Node* tmp = head;
    for (int i = 1; i < idx; i ++){
        tmp = tmp->next;
    }
    
    if (tmp == tail){
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        size ++;
        return;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
    size ++;
    return;
}

int main()
{
    // Write your code here
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;
    int test;
    cin >> test;
    for (int t = 0; t < test ; t ++){
        int idx;
        int val;
        cin >> idx >> val;
        if (idx > size){
            cout << "Invalid" << endl;
            continue;
        }
        insert_at_idx(head, tail, size, idx, val);
        Node *tmp_head = head;
        cout << "L -> ";
        while(tmp_head != NULL){
            cout << tmp_head->val << " ";
            tmp_head = tmp_head->next;
        }
        cout << endl;
        Node *tmp_tail = tail;
        cout << "R -> ";
        while(tmp_tail != NULL){
            cout << tmp_tail->val << " ";
            tmp_tail = tmp_tail->prev;
        }
        cout << endl;
    }
    

    return 0;
}