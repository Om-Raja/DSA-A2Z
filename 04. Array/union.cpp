#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //given sorted array
    int arr1[] = {1, 1, 2, 2, 3, 5, 6};
    int arr2[] = {1, 2, 3, 5, 7, 8, 10};

    //find union
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int i = 0, j = 0;
    vector <int> unionArr;

    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }else{ // arr1[i] > arr2[j]
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n1){
        if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while(j < n2){
        if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    cout << "Union Arr is : \n";
    for(auto value: unionArr){
        cout << value << " ";
    }
    return 0;
}