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

bool searchInLL(Node* head, int num){
    Node* temp = head;
    while(temp){
        if(temp -> data == num) return true;
        temp = temp -> next;
    }

    return false;
}

int main(){
    int arr[5] = {22, 34, 53, 66, 90};
    Node* head = arrToLL(arr, 5);
    cout << searchInLL(head, 53) << endl; //true
    cout << searchInLL(head, 66) << endl; // true
    cout << searchInLL(head, 76) << endl; //false
    return 0;
}