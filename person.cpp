#include "person.h"
#include "address.h"


person::person() {
    name = '\0';
    id = '\0';
}

person::person(string name, string ID, address &ADD) {
    this->name = name;
    id = ID;
    Address.country = ADD.country;
    Address.city = ADD.city;
    Address.street = ADD.street;
}

person::person(const person& P) {
    name = P.name;
    id = P.id;
    Address.country = P.Address.country;
    Address.city = P.Address.city;
    Address.street = P.Address.street;
}

void person::get_person() {
    cout<<"name: "<<name<<", id: "<<id<<", "<<Address;
}

ostream& operator << (ostream& output ,const person& Person){
output<<Person.get_person();

return output;
}