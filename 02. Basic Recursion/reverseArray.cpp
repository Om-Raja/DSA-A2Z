//reverse an array using recursion
#include<iostream>
using namespace std;
void reverseArray(int i, int arr[], int sizeOfArray){
    //base condition
    // if(i >= sizeOfArray / 2) return;
    if(i >= sizeOfArray - i - 1) return;

    swap(arr[i], arr[sizeOfArray - i - 1]);
    reverseArray(i+1, arr, sizeOfArray);
}
int main(){
    cout << "Enter size of array: ";
    int sizeOfArray;
    cin >> sizeOfArray;
    int arr[sizeOfArray];

    cout <<"Enter elements: " << endl;
    for(int i = 0; i < sizeOfArray; i++){
        cin >> arr[i];
    }
    cout << "all elements entered" << endl;

    reverseArray(0, arr, sizeOfArray);

    cout << "\nReverse of array is : \n";
    for(int i = 0; i < sizeOfArray; i++){
        cout << arr[i] << " ";
    }
}