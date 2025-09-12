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

void delete_node(Node *tmp, Node* &tail){
    if ( tmp->next == tail){
        Node *deleteNode = tmp->next;
        tail = tmp;
        tail->next = NULL;
        delete deleteNode;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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



    
    for (Node *i = head; i != NULL; i = i->next ){
        Node *j = i;
        while (j->next != NULL ){
            if (i->val == j->next->val){
                delete_node(j,tail);
            }
            else{
                j = j->next;
            }
        }
    }
    Node *tmp = head;
        while(tmp != NULL){
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
        cout << endl;
    

    return 0;
}
