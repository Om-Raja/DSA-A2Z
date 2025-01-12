// Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

#include<iostream>
using namespace std;
int findIndexOfElement(int arr[], int element, int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == element)
        return i;
    }
    return -1;
}
int main(){

    int size, element;
    cin >> size >> element;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int index = findIndexOfElement(arr, element, size);
    cout << index;
    return 0;
}
