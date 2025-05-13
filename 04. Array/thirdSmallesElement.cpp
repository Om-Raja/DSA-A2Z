// Find the third smallest element in an array of unique elements size n. Where n>3
#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 43, 55, 555, 23, 564, 64, 22, 654};
    // smallest = 2, secondSmallest = 22, thirdSmallest = 23
    int smallest = INT_MAX; // for now
    int secondSmallest = INT_MAX; // for now
    int thirdSmallest = INT_MAX; // for now

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "Smallest = " << smallest << endl;

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(arr[i] < secondSmallest && arr[i] > smallest){
            secondSmallest = arr[i];
        }
    }
    cout << "Second smallest = " << secondSmallest << endl;

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        if(arr[i] < thirdSmallest && arr[i] > secondSmallest){
            thirdSmallest = arr[i];
        }
    }
    cout << "Third smallest = " << thirdSmallest << endl;
    return 0;
}