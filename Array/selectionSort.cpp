#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {10, 4, 1, 3, 2, 7};

    //selection sort
    for(int i = 0; i < 5; i++){
        // we run parent for loop for only upto n-2 index because n -2 => means only last index is excluding. So in selection sort whole array will be sorted by second last element so we don't run for loop for last element.
        int index = i; // let shortest element
        for(int j = i + 1; j < 6; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    //printing array
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}