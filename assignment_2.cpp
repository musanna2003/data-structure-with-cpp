#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

void insert(int position, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (position <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    if (position == 1) {
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    } else {
        tail = newNode;
    }

    temp->next = newNode;
}

void search(int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Found" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Found" << endl;
}

void removeNode(int key) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == key) {

            if (temp == head) {
                head = temp->next;
                if (head != NULL)
                    head->prev = NULL;
            } 
            else if (temp == tail) {
                tail = temp->prev;
                if (tail != NULL)
                    tail->next = NULL;
            } 
            else {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
            }

            delete temp;
            cout << "Node deleted" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Value not found" << endl;
}

void middle() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle node: " << slow->data << endl;
}

void display() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    cout << "Doubly Linked List: ";
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL)
            cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, position, data, key;

    while (true) {
        cout << "\nMenu\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Remove\n";
        cout << "4. Middle\n";
        cout << "5. Display\n";
        cout << "6. End\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter value: ";
            cin >> data;
            insert(position, data);
        }
        else if (choice == 2) {
            cout << "Enter value to search: ";
            cin >> key;
            search(key);
        }
        else if (choice == 3) {
            cout << "Enter value to remove: ";
            cin >> key;
            removeNode(key);
        }
        else if (choice == 4) {
            middle();
        }
        else if (choice == 5) {
            display();
        }
        else if (choice == 6) {
            cout << "Program ended." << endl;
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}