#include <iostream>
using namespace std;
class Employee{
    public:
        string employeeId;
        int workingHours;
        int salaryPerHour;
        float salary;
    Employee(string employeeId, int workingHours,int salaryPerHour){
        this->employeeId=employeeId;
        this->workingHours=workingHours;
        this->salaryPerHour=salaryPerHour;
    }
    float CalSalary(){
        salary=workingHours*salaryPerHour;
        return salary;
    }

};
int main(){
    string employeeId;
    int workingHours;
    int salaryPerHour;
    cout<<"Input the Employees ID: ";
    cin>>employeeId;
    cout<<"Input the working hours:";
    cin>>workingHours;
    cout<<"Salary amount/hr:";
    cin>>salaryPerHour;
    Employee e(employeeId, workingHours, salaryPerHour);
    cout<<"Employee ID: "<<employeeId;
    cout<<"\n";
    cout<<"Salary: "<< e.CalSalary();

    return 0;
}
