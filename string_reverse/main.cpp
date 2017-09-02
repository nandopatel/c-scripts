#include <iostream>
#include <string>

using namespace std;
int i;
int main() {
    string input = "";

    cout << "please input a valid string: ";
    getline(cin,input);
    cout << input << endl;
    int str_length = input.length();
    cout << "Length of str = " << str_length << endl;
    i = str_length-1;

    for(i; i >= 0; i--){
        cout << input[i];
    }
    return 0;
}