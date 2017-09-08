#include <iostream>
using namespace std;

int squared(int x){
    return x*x;
}

int main() {
    unsigned int sq_of_sum = 0,sum_of_sqs = 0,difference = 0;
    for(int i=1;i<101;i++){
        sq_of_sum += i;
        sum_of_sqs += squared(i);
    }
    sq_of_sum = squared(sq_of_sum);
    cout << sq_of_sum-sum_of_sqs << endl;
    return 0;
}