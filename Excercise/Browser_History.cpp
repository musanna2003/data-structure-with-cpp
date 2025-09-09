#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
    string val;
    Node* next = NULL;
    Node* prev = NULL;
    Node(string v){
        val = v;
    }
};

void insert_at_tail(Node* &head, Node* &tail, string val){
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

int main()
{
    // Write your code here
    Node* head = NULL;
    Node* tail = NULL;
    while (true){
        string val;
        cin >> val;
        if (val == "end"){
            break;
        }
        insert_at_tail(head,tail,val);
    }

    int test;
    cin >> test;
    cin.ignore();
    Node *tmp = head;
    for (int t = 0; t < test ; t ++){
        string qr;
        getline(cin, qr);
        // cout << qr << endl;

        if(qr == "prev"){
            if(tmp->prev == NULL){
                cout << "Not Available" << endl;
                continue;
            }
            tmp = tmp->prev;
            cout << tmp->val << endl;
        }
        else if (qr == "next"){
            if(tmp->next == NULL){
                cout << "Not Available" << endl;
                continue;
            }
            tmp = tmp->next;
            cout << tmp->val << endl;
        }
        else {
            string search (qr,6);
            int flag = 0;
            for (Node *i = head; i != NULL; i = i->next ){
                if (i->val == search){
                    tmp = i;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                cout << "Not Available" << endl;
            }
            else{
                cout << tmp->val << endl;
            }
        }

    }
    

    return 0;
}