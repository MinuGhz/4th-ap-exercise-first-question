#ifndef INC_4TH_AP_REPOSITORY_EMPLOYEE_H
#define INC_4TH_AP_REPOSITORY_EMPLOYEE_H


#include "address.h"

class address;

class employee {
private:
    int hourWork , salaryPerHour ,workTodo, workDone;

public:
    string name , id;
    address *Address;

    employee();
    employee( string , string , address&, int , int, int, int);
    employee(const employee&);

    void set_employee(int , int , int , int);
    void set_employee(string , string, address&);
    void get_employee();
    double efficiency();
    double calculateSalary();


    friend ostream& operator <<(ostream& , const employee&);
    friend istream& operator >>(istream& , employee&);
};


#endif //INC_4TH_AP_REPOSITORY_EMPLOYEE_H
