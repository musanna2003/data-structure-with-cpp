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

void insert_at_tail(Node* &head, Node* &tail, int val, int &size){
    Node* newNode = new Node(val);
    if ( head == NULL){
        head = newNode;
        tail = head;
        size = size + 1;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    size = size + 1;
}

int main()
{
    // Write your code here
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int size1 = 0;
    int *s1 = &size1;
    while (true){
        int val;
        cin >> val;
        if (val == -1){
            break;
        }
        insert_at_tail(head1,tail1,val,size1);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    int size2 = 0;
    int *s2 = &size2;
    while (true){
        int val;
        cin >> val;
        if (val == -1){
            break;
        }
        insert_at_tail(head2,tail2,val,size2);
    }

    if (size1 != size2){
        cout << "NO";
    }

    else{
        int flag = -1;
    
        for (Node *i = head1 , *j = head2; i != NULL; i = i->next, j = j->next ){
            if(i->val != j->val){
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == -1){
            cout << "YES" << endl;
        }

    }
    return 0;
}