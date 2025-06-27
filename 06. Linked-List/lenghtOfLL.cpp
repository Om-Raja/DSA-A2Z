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

int lengthOfLL(Node* head){
    // don't tamper head ptr
    int count = 0;
    Node* temp = head;
    while(temp){
        temp = temp -> next;
        count++;
    }
    return count;
}

int main(){
    int arr[5] = {22, 34, 53, 66, 90};
    Node* head = arrToLL(arr, 5);
    cout << "length of LL = " << lengthOfLL(head);
    return 0;
}