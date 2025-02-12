#include<iostream>
using namespace std;

void printNum(int i, int N){
    //Base condition
    if(i > N) return;

    cout << i << endl;

    printNum(i + 1, N);
}

int main(){
    cout << "Enter N: ";
    int N;
    cin >> N;
    printNum(1, N);
}