#include <iostream>
using namespace std;
class Employee{
	private:
	char* firstName;
	string lastName;
	int salary;
	public:
	Employee(char* firstName,string lastName, int salary){
		this->firstName=firstName;
		this->lastName=lastName;
		this->salary=salary;
	}
	void setFirstName(char *firstName){
		this->firstName=firstName;
	}
	void setLastName(string lastName){
		this->lastName=lastName;
	}
	void setSalary(int salary){
		this->salary=salary;
	}
	char* getFirstName(){
		return firstName;
	}
	string getLastName(){
		return lastName;
	}
	int getSalary(){
		return salary;
	}
	void displaySalary(){
		cout<<"Your yearly salary is: "<<(salary*12)<<endl;
	}
	void salaryAfterRaise(){
		salary+=salary*0.1;
		salary*=12;
		cout<<"Congratulations! You got a 10% raise in your yearly salary \nYour salary is now: "<< salary<<endl;
	}
};
int main(){
	char* firstName= new char[10];
	string lastName;
	int salary;
	char* firstName2= new char[10];
	string lastName2;
	int salary2;
	cout<<"---Information for employee 1: ------\n";
	cout<<"First Name: ";
	cin>> firstName;
	cout<<"Last Name: ";
	cin>>lastName;
	cout<<"Salary: ";
	cin>>salary;
	if(salary<0){
		salary=0;
	}
	Employee e1(firstName,lastName,salary);
	e1.displaySalary();
	e1.salaryAfterRaise();
	
	cout<<"\n \n";
	cout<<"---Information for employee 2: ------\n";
	cout<<"First Name: ";
	cin>> firstName2;
	cout<<"Last Name: ";
	cin>>lastName2;
	cout<<"Salary: ";
	cin>>salary2;
	if(salary2<0){
		salary2=0;
	}
	
	Employee e2(firstName2,lastName2,salary2);
	e2.displaySalary();
	e2.salaryAfterRaise();
	
	delete[] firstName;
	
	return 0;
}