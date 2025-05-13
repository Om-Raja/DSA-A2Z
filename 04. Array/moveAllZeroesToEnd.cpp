// Move all zeroes to the end
// Brute force approach

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 0, 0, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    //total number of zeroes
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) count++;
    }

    // an array of non-zero elements
    int temp[n-count];
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            temp[j] = arr[i];
            j++;
        }
    }

    // copy temp to arr
    for(int i = 0; i < n-count; i++){
        arr[i] = temp[i];
    }

    // set 0 for remaining indexes
    for(int i = n-count; i < n; i++){
        arr[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}