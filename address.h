#ifndef SERI4_ADRESS_H
#define SERI4_ADRESS_H
#include "person.h"

class address {
protected:
    string country , city, street;

public:

    address();
    address (string , string , string);

void set_address(string , string , string);
void get_address();

 friend ostream& operator << (ostream& , address&);
 friend istream& operator >> (istream& , address&);

 friend person;
};


#endif //SERI4_ADRESS_H
