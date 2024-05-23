#include "employee.h"
#include "address.h"


employee::employee() {
    hourWork = 0 ; salaryPerHour = 0 ; workDone = 0;
    name = '\0' ; id = '\0';
}

employee::employee(int HW, int SPH, int WD, string Name, string ID, address &Add) {
    hourWork = HW; salaryPerHour = SPH ; workDone = WD;
    name = Name ; id = ID;
    Address = Add;
}

employee::employee(const employee &Emp) {
    hourWork = Emp.hourWork; salaryPerHour = Emp.salaryPerHour;
    workDone = Emp.workDone;
    name = Emp.name; id = Emp.id;
    Address = Emp.Address;
}




