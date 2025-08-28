#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next = NULL;
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
    tail = newNode;
}

int main () {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next  = new Node(30);

    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}