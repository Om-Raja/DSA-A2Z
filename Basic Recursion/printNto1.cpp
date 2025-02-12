#include <iostream>
using namespace std;

void printNto1(int N){
    //Base condition
    if(N == 0) return;
    cout << N << endl;
    printNto1(N - 1);
}
int main()
{
    int N;
    cout << "Enter N :";
    cin >> N;
    printNto1(N);
    return 0;
}