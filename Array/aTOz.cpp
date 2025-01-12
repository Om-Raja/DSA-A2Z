//Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
#include<iostream>
using namespace std;
int main(){
    char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for(int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }
}