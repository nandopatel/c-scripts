#include <iostream>
#include <fstream>
using namespace std;
int id, hours, wages, ot_hours, ot_rate, take;
int employee_take(int id, int hours, int wages, int ot_hours, int ot_rate);
void write_to_file();

int main(){
    cout << "Employee id: ";
    cin >> id;
    cout << "Hours done: ";
    cin >> hours;
    cout << "Rate per hour: ";
    cin >> wages;
    cout << "Enter overtime hours: ";
    cin >> ot_hours;
    cout << "Enter overtime rate: ";
    cin >> ot_rate;
    employee_take (id,hours,wages,ot_hours,ot_rate);
    write_to_file();
}

int employee_take(int id, int hours, int wages, int ot_hours, int ot_rate) {

    take = hours * wages + ot_hours * ot_rate;
    cout << take << endl;
    return id,hours;
}

void write_to_file(){
    ofstream f;
    f.open ("employee_take.txt");
    f << "id    " << "hours    " << "wages    " << "overtime hours    " << "overtime rate    " << "take    " << endl;
    f << id << "    " << hours << "       " << wages << "       " << ot_hours << "                " << ot_rate << "               " << take << endl;
    cout << endl << "Written to file" ;
    f.close();
}

