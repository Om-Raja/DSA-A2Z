#include <iostream>
using namespace std;
void bubble_sort(int *arr, int n){
    int didSwap = 0;
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j <= i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0) {
            cout << "No swaps occured" << endl; 
            break;
        }
    }
}

void printArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {2, 12, 3, 4, 1};
    int arr2[5] = {1, 2, 3, 4, 5};
    
    bubble_sort(arr, 5);
    printArr(arr, 5);

    bubble_sort(arr2, 5);
    printArr(arr2, 5);

    return 0;
}