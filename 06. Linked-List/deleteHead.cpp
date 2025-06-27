#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

Node* arrToLL(int *arr, int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < n; i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }

    return head;
}

Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    int arr[5] = {22, 34, 53, 66, 90};
    Node* head = arrToLL(arr, 5);

    cout << "LL before deleting head : ";
    printLL(head);
    cout << endl;

    head = deleteHead(head);
    cout << "LL after deleting head: ";
    printLL(head);

    return 0;
}