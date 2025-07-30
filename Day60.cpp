#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
    public:
        Node* head;

        LinkedList() : head(nullptr) {}

        void insert(int val) {
            Node* newNode = new Node(val);
            if (!head) {
                head = newNode;
            } else {
                Node* temp = head;
                while (temp->next) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

        void display() {
            Node* temp = head;
            while (temp) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    cout << "Linked List: ";
    list.display();
    list.insert(40);
    cout << "After inserting 40: ";
    list.display();
    list.insert(50);
    cout << "After inserting 50: ";
    list.display();
    list.insert(60);
    cout << "After inserting 60: ";
    list.display();
    return 0;
}