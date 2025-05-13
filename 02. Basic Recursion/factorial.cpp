//functional approach
#include<iostream>
int factorial(int n){
    //base condition
    if(n == 0) return 1;

    return (n * factorial(n - 1));
}
int main(){
    std::cout << "Enter number to find factorial :";
    int n;
    std::cin >> n;

    int ans = factorial(n);
    std::cout << ans;
}