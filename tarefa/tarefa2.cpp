#include <iostream>
//first question
using namespace std;

int main(){
    float employee, new_salary, new1;

    cout << "type your salary you want:";
    cin >> employee;
    new_salary = employee * 0.25;
   new1 = employee + new_salary;
    cout << "your new salary is: " << new1;

return 0;
}
