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