// Lecture 19 - Homework - end of video
// reverse approach - keep greatest element in last and unsorted array will be from beginning of array. Array will become sorted from end.
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 4, 3, 2, 8 };
    for(int i = 0; i < 4; i++){
        int index = 4 - i;
        for(int j = 0; j < 4 - i; j++){
            if(arr[j] > arr[index]){
                index = j;
            }
        }
        swap(arr[4 - i], arr[index]);
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}