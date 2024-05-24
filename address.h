#ifndef SERI4_ADRESS_H
#define SERI4_ADRESS_H
#include "person.h"
#include "employee.h"
#include "iostream"
#include "cstring"
using namespace std;

class person;
class employee;

class address {

public:

    string country , city, street;

    address();
    address (string , string , string);

void set_address(string , string , string);
void get_address();

 friend ostream& operator << (ostream& , address&);
 friend istream& operator >> (istream& , address&);

 friend person;
 friend employee;
};


#endif //SERI4_ADRESS_H
