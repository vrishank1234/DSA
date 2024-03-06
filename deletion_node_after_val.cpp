#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*next;

    Node(int vlaue): data(value) , next(nullptr){}
}
Node* insert(Node *head , int value){
    Node *newNode = newNode(value);
    newNode->next=head;
    cout<<newNode->data<<":"<<newNode->next<<endl;
    return newNode;
}