

#ifndef SERI4_PERSON_H
#define SERI4_PERSON_H

#include "address.h"
#include "iostream"
using namespace std;

class address;

class person {
private:
    string name , id;
    address Address;

    bool validate(const string&);

public:
    person(string, string , address&);
    person();
    person(const person&);

    void get_person();
    void set_person(string, string, string, string, string);

    friend address;
    friend ostream& operator << (ostream& , person&);
    friend istream& operator >> (istream& , person&);
    void operator = (person& , const person&);
};


#endif //SERI4_PERSON_H
