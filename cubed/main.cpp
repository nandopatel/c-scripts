#include <iostream>

using namespace std;
int cubed(int x){
    return x*x*x;

}
int i;
int main(){
    for(i = 1;i<100;i++){
        cout << " " << cubed(i) << endl;
    }
    return 0;
}