#ifndef SERI4_ADRESS_H
#define SERI4_ADRESS_H


class address {
private:
    string country , city, street;

public:

    address (string , string , string);

void set_address(string , string , string);
void get_address();

 friend ostream& operator << (ostream& , address&);
 friend istream& operator >> (istream& , address&);

};


#endif //SERI4_ADRESS_H
