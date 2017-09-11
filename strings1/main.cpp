#include <iostream>
using namespace std;
int get_indicies(char n, string str);

int main(){
    string str1 = "12345";     
    get_indicies('4',str1);
    return 0;
}

int get_indicies(char n, string str){
    int len_of_string = str.length();
    int i;
    int x = 0;
    cout << len_of_string << endl;
    string split_array [len_of_string];
    int indicies [len_of_string];

    cout << "[";
    for(i = 0; i < len_of_string;i++){
        if(str[i] == n){
            indicies[x] = i;
            x++;
        }else{

                cout << str[i];
            if(i < len_of_string-1){
                cout << ",";
            }
        }
    }
    cout << "]" << endl;
    int len_of_array = sizeof(indicies)/sizeof(*indicies);
    cout << "+";
    cout << len_of_array << endl;
    cout << indicies[ 0];
    return 0;
}






