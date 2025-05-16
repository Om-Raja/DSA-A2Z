//brute force approach
#include <iostream>
using namespace std;
void twoSum(int *arr, int n, int target){
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i]+arr[j] == target){
                cout << "Yes. At index : " << i << " and " << j << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
    return;
}
int main()
{
    int arr1[5] = {1, 2, 3, 5, 6};
    int arr2[4] = {1, 3, 5, 6};
    int arr3[7] = {1, 2, 7, 8, 3, 5, 6};

    twoSum(arr1, 5, 8);
    twoSum(arr1, 5, 25);
    twoSum(arr2, 4, 11);
    twoSum(arr2, 4, 12);
    twoSum(arr3, 7, 10);
    return 0;
}