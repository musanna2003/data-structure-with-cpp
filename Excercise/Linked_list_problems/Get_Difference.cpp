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


int main()
{
    // Write your code here
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

    int min = head->val;
    int max = head->val;
    for (Node *i = head; i != NULL; i = i->next ){
        if(i->val > max){
            swap(i->val,max);
        }
        if(i->val < min){
            swap(i->val,min);
        }
    }
    cout << max-min;
    

    return 0;
}
