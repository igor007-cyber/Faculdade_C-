#include <iostream>
//second question
using namespace std;

int main(){
float employee, new_salary, new1,new2;

    cout << "seu salario: ";
    cin >> employee;
     new_salary = employee * 0.1;
    new1 =  (new_salary - employee) + 50;
    cout << "your salary is: " << new1;

return 0;
}
