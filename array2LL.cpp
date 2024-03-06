#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data1){
        data = data1;
        next = nullptr;

    }
};

Node* convertArr2LL(int arr[]){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i=1 ; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;


}

int main(){
    int arr[5]={1,2,3,4,5};
    Node* head = convertArr2LL(arr);
    cout<< head->data;
}