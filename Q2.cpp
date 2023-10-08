#include <iostream>
using namespace std;
class Employee{
    public:
        int employeeId;
        int workingHours;
        int salaryPerHour;
        int salary;
    Employee(int employeeId, int workingHours,int salaryPerHour){
        this->employeeId=employeeId;
        this->workingHours=workingHours;
        this->salaryPerHour=salaryPerHour;
    }
    void CalSalary(){
        salary=workingHours*salaryPerHour;
        return salary;
    }

};
int main(){
    int employeeId;
    int workingHours;
    int salaryPerHour;
    cout<<"Input the Employees ID: ";
    cin>>employeeId;
    cout<<"Input the working hours:";
    cin>>workingHours;
    cout<<"Salary amount/hr:";
    cin>>salary;
    Employee e(employeeId, workingHours, salaryPerHour);
    cout<<"Employee ID: "<<employeeId;
    cout<<"Salary: "<<e.CalSalary;

    return 0;
}
