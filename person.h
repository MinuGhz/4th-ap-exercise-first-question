

#ifndef SERI4_PERSON_H
#define SERI4_PERSON_H

#include "address.h"
#include "iostream"
using namespace std;

class person {
private:
    string name , id;
    address Address;

public:
    person(string, string , address&);
    person();
    person(const person&);

    void get_person();

    friend address;
    friend ostream& operator << (ostream& , const person&);
};


#endif //SERI4_PERSON_H
