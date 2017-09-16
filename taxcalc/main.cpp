#include <iostream>
using namespace std;
float total,cost,tax;

float tax_calc(float cost,float tax){
    total = cost + cost * (tax/100);
    cout << "The total cost + %" << tax << " tax is: ";
    cout << total;
}

int main(){
    cout << "Enter cost: " << endl;
    cin >> cost;
    cout << "Enter tax in %: " << endl;
    cin >> tax;
    tax_calc(cost,tax);
}
