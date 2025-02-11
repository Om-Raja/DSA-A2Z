#include<iostream>
using namespace std;
int main(){
    int num1 = 20, num2 = 50;
    
    //using Eculeadean algorithm
    // gcd(a, b) = gcd(a-b, b) , provided a > b
    // gcd(a, b) = gcd(a % b, b) , provided a > b

    while(num1 > 0 && num2 > 0){
        if(num1 > num2){
            num1 = num1 % num2;
        }else{
            num2 = num2 % num1;
        }
    }
    if(num1 == 0)
        cout << "GCD is " << num2;
    else
        cout << "GCD is " << num1;

    return 0;
}