#include <iostream>
using namespace std;
int main()
{
    string s = "asdfadfjsonfasffofwernweohog";
    string s2 = "dnffoASODFNodnonLVMOGNldsj234";

    //taking hash[26]

    int hash[26] = {0}; // initially zero

    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }
    for(int f: hash){
        cout << f << " ";
    }
    cout << endl << endl;
    cout << "a appears " << hash['a' - 'a'] << " times"  << endl;
    cout << "f appears " << hash['f' - 'a'] << " times"  << endl;
    cout << "w appears " << hash['w' - 'a'] << " times"  << endl;

    // dealing with all characters
    int hashAll[257] = {0};
    for(int i = 0; i < s2.size(); i++){
        hashAll[s2[i]]++;
    }
    for(int h: hashAll){
        cout << h << " ";
    }
    cout << endl << endl;

    cout << "A appears " << hashAll['A'] << " times" << endl;
    cout << "a appears " << hashAll['a'] << " times" << endl;
    cout << "D appears " << hashAll['D'] << " times" << endl;
    cout << "d appears " << hashAll['d'] << " times" << endl;
    cout << "3 appears " << hashAll['3'] << " times" << endl;
    cout << "2 appears " << hashAll['2'] << " times" << endl;


    return 0;
}