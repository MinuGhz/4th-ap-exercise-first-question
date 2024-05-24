#include "iostream"
#include "address.cpp"
#include "person.cpp"
#include "employee.cpp"
using namespace std;


int main(){
    address Ali_house;
    address mmd_house("iran", "karaj" , "5th");
    cout<<"Enter Ali's address: ";
    cin>>Ali_house;


    person mamad , reza;
    reza.set_person("Reza Rezae" , "85rza445" , "iran" , "tehran" , "enghelab");
    mamad = reza;
    cout<<"Here is mamad data:\n "; mamad.get_person();

    cout<<"Enter mamad data: ";
    cin>>mamad;
    cout<<"mamad is here!\n";
    cout<<mamad<<endl;


    employee amir;
    employee ali("majid majidi" , "91mjd546" , Ali_house , 40 , 2 , 30 , 25);
    amir.set_employee("amir amiri" , "91amr445" , Ali_house);
    amir.set_employee(42 , 1.8 , 24 , 22);
    cout<<"amir's efficiency is "<<amir.efficiency()<<"%\n";
    cout<<"amir's salary is "<<amir.calculateSalary()<<"$\n";

    employee majid;
    cout<<"let's talk about majid!\n";
    cout<<"Enter new information for majid: ";
    cin>>majid;


}