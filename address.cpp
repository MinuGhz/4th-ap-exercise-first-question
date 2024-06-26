#include "address.h"
#include "iostream"
#include "string"
using namespace std;

address::address() {
    country = '\0';
    city = '\0';
    street = '\0';
}

address::address(string co, string c, string s) {
    country = co; city = c ; street = s;
}

void address::set_address(string co , string c , string s){
    country = co; city = c ; street = s;
}

void address::get_address() {
    cout<<"country: "<<country<<", city: "<<city<<", street: "<<street<<endl;
}


ostream& operator << (ostream& output ,address& Address){
    output<<Address.country<<","<<Address.city<<", "<<Address.street;

      return output;
}

istream& operator >> (istream& input ,address& Address){
   char temporaryString[100];
   input>>temporaryString;
   Address.country = temporaryString;
   input >> temporaryString;
   Address.city = temporaryString;
   input >> temporaryString;
   Address.street = temporaryString;

     return input;
}

