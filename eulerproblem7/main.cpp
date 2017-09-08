#include <iostream>
using namespace std;
int main() {

    int counter = 0;
    int x;
    int i = 0;

    while(counter<10001){
        i++;
        for( x = 2; x < i;x++) {
            if ( i % x == 0) {
                break;
            }
            if (x == i -1){
                counter++;


            }
        }

    }
    cout << counter << endl;
    cout << i << endl;
}