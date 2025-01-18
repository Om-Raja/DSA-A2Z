// selectio sort descending order
#include <iostream>
using namespace std;
int main()
{
    //given array
    int arr[5] = {10, 4, 3, 2, 8};
    for(int i = 0; i < 4; i++){
        int indexOfLargestElement = i; //let
        
        //traverse unsorted array from 1st index to last index
        for(int j = i + 1; j < 5; j++){
            if(arr[j] > arr[indexOfLargestElement]){
                indexOfLargestElement = j;
            }
        }
        swap(arr[i], arr[indexOfLargestElement]);
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}