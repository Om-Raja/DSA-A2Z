//recursion problem
//print name five times
#include<iostream>
using namespace std;

void printName(int i, int n){
    //base condition
    if(i > n){
        return;
    }
    cout << "Hi this is Om Raja\n";
    printName(i + 1, n);
}

int main(){
    int n;
    cout << "Enter number of times: ";
    cin >> n;
    printName(1, n);
}