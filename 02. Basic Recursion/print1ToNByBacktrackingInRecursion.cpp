//Print N to 1 by backtracking
//Simply before print statement, call the function for next recursion

#include <iostream>
using namespace std;
void printNTo1(int i, int N){
    //Base condition
    if(i > N) return;
    printNTo1(i + 1, N);
    cout << i << endl;
}
int main()
{
    cout << "Enter N: ";
    int N;
    cin >> N;
    printNTo1(1, N);
    return 0;
}