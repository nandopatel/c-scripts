#include <iostream>


int squared(int x){
    return x*x;

}

using namespace std;
int main() {
    int i;
    for(i = 1;i < 26;i++){


        if(squared(i) <= 10){
            cout << "   " << squared(i);

        }
        if(squared(i) < 100 && squared(i) >= 10){
            cout << "  " << squared(i);

        }

        if(squared(i) < 1000 && squared(i) >= 100){
            cout << " " << squared(i);

        }

        if(i%5==0){
           cout << endl;

        }

    }


    return 0;
}