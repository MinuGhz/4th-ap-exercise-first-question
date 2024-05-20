#include "address.h"
#include "iostream"
using namespace std;


address::address(string co, string c, string s) {
    country = co; city = c ; street = s;
}

void address::set_address(string co , string c , string s){
    country = co; city = c ; street = s;
}

void address::get_address() {
    cout<<country<<", "<<city<<", "<<street<<endl;
}


ostream& operator << (ostream& output ,address& Address)
    output<<"country: "<<country<<", city: "<<city<<", street: "<<street<<endl;

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

