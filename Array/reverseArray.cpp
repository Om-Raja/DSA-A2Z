// Reverse an array 

#include <iostream>
using namespace std;
int main()
{
    // *! Brute force approach
    // We will create a temp array. then traverse original array from last and traverse temp array from beginning. In this process we will assign temp array's elements in sequence from 0 to n while those elements will be coming from original array in reverse sequence (i.e., n to 0);
    int arr[5] = {1, 2, 3, 4, 5};
    int temp[5];
    for(int i = 4; i >= 0; i--){
        int j = 4 - i; // initializing j outside the loop didn't work so I think this is better way.
        temp[j] = arr[i];
    }
    // getting reverses sequence back to original array from temp array
    for(int i = 0; i < 5; i++){
        arr[i] = temp[i];
        cout << arr[i] << " ";
    }

    //! another approach
    cout << "\n another approach\n";
    int arr2[5] = {10, 11, 12, 13, 14};
    for(int i = 0; i < 5/2; i++){
        int j = 4 - i;
        int temp = arr2[i];
        arr2[i] = arr2[j];
        arr2[j] = temp;
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}