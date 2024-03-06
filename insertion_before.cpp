#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void insertBefore(int targetValue, int newValue) {
        Node* current = head;

        
        if (head != nullptr && head->data == targetValue) {
            insert(newValue);
            return;
        }

        
        while (current->next != nullptr && current->next->data != targetValue) {
            current = current->next;
        }

        
        if (current->next != nullptr) {
            Node* new_node = new Node(newValue);
            new_node->next = current->next;
            current->next = new_node;
        } else {
            cout << "Node with value " << targetValue << " not found in the list." << endl;
        }
    }
};
int main() {
    LinkedList linkedList;

    linkedList.insert(3);
    linkedList.insert(2);
    linkedList.insert(1);

    cout << "Linked List:" << endl;
    linkedList.display();

    int targetValue = 2;
    int newValue = 5;

    linkedList.insertBefore(targetValue, newValue);

    cout << "Linked List after insertion:" << endl;
    linkedList.display();

    return 0;
}