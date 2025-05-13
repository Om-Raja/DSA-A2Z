//parameterized approach
#include<iostream>
using namespace std;
void factorial(int i, int fact){
    if(i == 1){
        cout << fact << endl;
        return;
    }
    factorial(i - 1, fact * i);
}
int main(){
    int n;
    cout << "Enter number to find factorial: ";
    cin >> n;
    factorial(n, 1);
}