#include "person.h"
#include "address.h"
#include "string"
#include "iostream"
using namespace std;


person::person() {
    name = '\0';
    id = '\0';
    Address = new address;
}

person::person(string name, string ID, address &ADD) {
    Address = new address;
    if(validate(ID)) {
        this->name = name;
        id = ID;
        Address->country = ADD.country;
        Address->city = ADD.city;
        Address->street = ADD.street;
    }

    else {cout<<"Invalid ID format!\n" ; exit;}
}

person::person(const person& P) {
    name = P.name;
    id = P.id;
    Address->country = P.Address->country;
    Address->city = P.Address->city;
    Address->street = P.Address->street;
}

void person::get_person() {
    cout<<"name: "<<name<<", id: "<<id<<", Address: ";
    cout<<*Address<<endl;
}

void person::set_person(string Name, string ID, string Country, string City, string Street) {
    name = Name;
    id = ID;
    Address->set_address(Country,City,Street);
}

bool person::validate(const string& ID) {
    if(ID.length() <8 || ID.length() > 10) return false;
    //int entryYear = stoi(ID, 0 , 2);
    int entryYear = ('ID[0]' - 48)*10 + ('ID[i]' - 48);
    if(entryYear<84 || entryYear > 99) return false;

    if(isalpha(ID[2])){
        if(isalpha(ID[3]) && !isalpha(ID[4])) return false;

    }
    else return false;

    for(size_t i=2 ; i<ID.length() ; i++){
        if (isalpha(ID[i])) continue;
        else {
            int num = ID[i] -48;
            if(num > 6 || num < 4) return false;
        }
    }

    return true;
}

ostream& operator << (ostream& output , person& Person){
output<<Person.name<<", "<<Person.id<<", "<<*Person.Address;

return output;
}

istream& operator >> (istream& input , person& Person){
    input>>Person.name>>Person.id >> *Person.Address;

    return input;
}

void person::operator = (const person& P){
    name = P.name;
    id = P.id;
    Address->country = P.Address->country;
    Address->city = P.Address->city;
    Address->street = P.Address->street;
}