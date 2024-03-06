#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printNodes(Node* start) {
    Node* current = start;

    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }

    cout << endl;
}

int main() {
    Node* start;
    int temp;
    int n;


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

    Node* n4 = new Node;
    n3->next = n4;
    n4->data = 60;
    n4->next = NULL;

     Node* n5 = new Node;
    n4->next = n5;
    n5->data = 70;
    n5->next = NULL;


    cout<<"enter the value you want to enter"<<endl;
    cin>>n;

    Node* current = start;
    Node* preptr = current;
    Node* preptr1 = preptr;

    if (start == NULL) {
        cout << "overflow";
    }
    current = start;
    preptr = current;
    preptr1 = preptr;

    while (current->next->data != n) {
        preptr1 = preptr;
        preptr = current;
        current = current->next;
    }
    preptr1->next = current->next;
    delete current;

    cout << "Nodes after deletion: ";
    printNodes(start);

    return 0;
}