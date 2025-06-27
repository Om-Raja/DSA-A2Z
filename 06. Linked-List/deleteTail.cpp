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

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* temp = head;

    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }

    delete temp->next;
    temp->next = NULL;

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

    cout << "LL before deleting tail : ";
    printLL(head);
    cout << endl;

    head = deleteTail(head);
    cout << "LL after deleting tail: ";
    printLL(head);

    return 0;
}