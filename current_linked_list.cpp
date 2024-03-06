#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* start;
    
    Node* n1 = new Node;
    start = n1;
    n1->data = 30;
    n1->next = NULL;

    Node* n2 = new Node;
    n1->next = n2;
    n2->data = 40;
    n2->next = NULL;

    Node* n3 = new Node;
    n2->next = n3;
    n3->data = 50;
    n3->next = NULL;

    
    Node* current = start;
    Node* previous = NULL;

    while (current != NULL) {
        cout << "Current Node Data: " << current->data;

        if (previous != NULL) {
            cout << ", Previous Node Data: " << previous->data;
        }

        cout << endl;

        // Move to the next node
        previous = current;
        current = current->next;
    }

    return 0;
}