#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 34, 5, 15, 6, 3, 6, 6, 2, 6, 2, 6, 3, 62};
    //max element = 62

    int hash[63] = {0};

    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    for(int h : hash){
        cout << h << " ";
    }
    cout << endl << endl;
    
    cout << "6 appears " << hash[6] << " times." << endl;
    cout << "0 appears " << hash[0] << " times." << endl;
    cout << "62 appears " << hash[62] << " times." << endl;

    return 0;
}