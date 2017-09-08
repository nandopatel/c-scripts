#include <iostream>
using namespace std;

int main() {
    int total = 0;
    int x = 1, y = 2, z = 0;

    while (y <= 4000000) {
        z = x + y;
        if (y % 2 == 0)
            total += y;
        x = y;
        y = z;
    }
    cout << total << endl;
}