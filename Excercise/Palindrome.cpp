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

int main () {
    Node* head = NULL;
    Node* tail = NULL;
    while (true){
        int val;
        cin >> val;
        if (val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }

    Node* temp_head = head;
    Node* temp_tail = tail;

    int flag = -1;
    while (true){
        if (temp_head->val!=temp_tail->val){
            flag = 1;
            break;
        }
        if (temp_head==temp_tail || temp_head->next==temp_tail){
            break;
        } 
        temp_head = temp_head->next;
        temp_tail = temp_tail->prev;
    }
    if (flag == -1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
}