#include "employee.h"
#include "address.h"


employee::employee() {
    hourWork = 0 ; salaryPerHour = 0 ; workDone = 0;
    name = '\0' ; id = '\0';
    Address = new address;
}

employee::employee(string Name, string ID, address &Add, int HW, int SPH, int WTD, int WD ) {
    hourWork = HW; salaryPerHour = SPH ; workTodo = WTD; workDone = WD;
    name = Name ; id = ID;
    Address = new address;
    *Address = Add;
}

employee::employee(const employee &Emp) {
    Address = new address;
    hourWork = Emp.hourWork; salaryPerHour = Emp.salaryPerHour;
    workTodo = Emp.workTodo; workDone = Emp.workDone;
    name = Emp.name; id = Emp.id;
    *Address = *Emp.Address;
}


void employee::set_employee(int HW, int SPH,int WTD, int WD) {
    hourWork = HW; salaryPerHour = SPH;
    workTodo = WTD; workDone = WD;
}

void employee::set_employee(string Name , string ID , address& Add) {
    name = Name ; id = ID ;
    Address->country = Add.country;
    Address->city = Add.city;
    Address->street = Add.street;
}

void employee::get_employee() {
    cout<<"name: "<<name<<", ID: "<<id<<endl;
    cout<<*Address<<endl;
    cout<<"Hour work: "<<hourWork<<", Salary(per hour): "<<salaryPerHour;
    cout<<", Work to Do: "<<workTodo<<", Work Done: "<<workDone<<endl;

}

double employee::efficiency(){
    double wd = workDone;
    double eff = (wd / hourWork)*100;

    return eff;
}

double employee::calculateSalary() {
    double salary = hourWork*salaryPerHour;
    double realSalary = salary*(efficiency());

    return realSalary;
}



ostream& operator << (ostream& output , employee& Emp){
    //output << Emp.get_employee();

    return output;
}

istream& operator >> (istream& input , employee& Emp){
    /*char temporaryString[100];
    int Hw, Sph , Wd , wtd;
    cin>>temporaryString;
    Emp.name = temporaryString;
    cin>>temporaryString;
    Emp.id = temporaryString;
    cin>>*Emp.Address;
    cin>>Hw>>Sph>>Wd;
    Emp.set_employee(Hw, Sph, wtd, Wd);*/

   input>>Emp.name>>Emp.id>>*Emp.Address;

    return input;
}