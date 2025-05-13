//check if a string is palindrome or not
#include<iostream>
using namespace std;

bool checkPalindrome(int i, string s, int sizeOfStr){
    //base condition
    if(i >= sizeOfStr / 2) return true;

    if(s[i] != s[sizeOfStr - 1 - i]) return false;

    return checkPalindrome(i+1, s, sizeOfStr);
}

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;

    if(checkPalindrome(0, s, s.length())) cout << "Yes palindrome";
    else cout << "Not a palindrome";

}