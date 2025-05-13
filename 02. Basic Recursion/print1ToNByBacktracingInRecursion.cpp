//Print 1 to N by backtracking in recursion
//To implement this we can call another function before evaluating any expression
#include <iostream>
using namespace std;
void print1ToN(int N){
    //Base condition
    if(N == 0) return;
    print1ToN(N -1);

    cout << N << endl;
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;
    print1ToN(N);
    return 0;
}