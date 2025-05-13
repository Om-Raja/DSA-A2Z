// Find the second largest element in an array of unique elements of size n. Where n>3
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {23, 34, 5, 5, 5, 123, 53, 53, 566, 63}; //largest = 566, secondLargest = 123
    int largest = INT_MIN; // include <climits>
    int secondLargest = INT_MIN; // for now
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest = " << largest << endl;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]>secondLargest && arr[i] < largest){
            secondLargest = arr[i];
        }
    }
    cout << "Second largest = " << secondLargest << endl;

    return 0;
}