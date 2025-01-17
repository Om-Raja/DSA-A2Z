#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the index you want: ";
    cin >> n;

    int fibonacci[1000];
    fibonacci[0] = 0; // first number
    fibonacci[1] = 1; // second number

    for(int i = 2; i < n; i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    cout << fibonacci[n - 1];
    return 0;
}