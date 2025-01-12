// 2: Calculate the average of elements in an array of size 18.
#include <iostream>
// #include <bits/stdc++.h> // sizeof operator works without including this library
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    float sum = 0;
    for(int i = 0; i < sizeof(arr)/4; i++){
        //sizeof(arr) returns size of array in bytes. In this example, there are 18 elements in the array so the size returned will be 18*4 bytes. Therefore, divide the size in bytes by size of one element(i.e., 4 bytes) to get number of elements in the array.
        sum += arr[i];
    }
    float avg = sum / 18;
    cout << avg;
    return 0;
}