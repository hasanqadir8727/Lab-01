#include<iostream>
using namespace std;

class student{
	public:
	int rollNum,age,numStudents;
	string name,address;
	void setName(string name){
		this->name=name;
	}
	string getName(){
		return name;
	}
	void setAge(int age){
		this->age=age;
	}
	int getAge(){
		return age;
	}
	void setAddress(string address){
		this->address=address;
	}
	string getAddress(){
		return address;
	}
	void setRollNum(int rollNum){
		this->rollNum=rollNum;
	}
	int getRollNum(){
		return rollNum;
	}
	void age14(student *s, int numStudents){
		cout<<"Students who have the age of 14:  \n";
		for(int i=0;i<numStudents;i++){
		
		if((*(s+i)).age==14){
			cout<<(*(s+i)).name<<" \n";
		}
	}
	}
	void evenRollNum(student *s, int numStudents){
		for(int i=0;i<numStudents;i++){
		
		if((*(s+i)).rollNum%2==0){
			cout<<"Students who have even roll number :  "<<(*(s+i)).name<<" \n";
		}
	}}
	void rollNumberByUser(student *s, int numStudents){
		cout<<"Details of students whose roll numbers were entered by the user: "<<endl;
		for(int i=0;i<numStudents;i++){
		cout<<"Names: "<<(*(s+i)).name<<"\n";
		cout<<"Ages: "<<(*(s+i)).age<<"\n";
		cout<<"Roll Numbers: "<<(*(s+i)).rollNum<<"\n";
		cout<<"Addresses: "<<(*(s+i)).address<<"\n";
		cout<<"\n";
	}
	}

};
void input(int numStudents, student*s){
	for(int i=0;i<numStudents;i++){
		cout<<"Enter the name of student "<<i+1<<": ";
		cin>>(*(s+i)).name;
	}
		for(int i=0;i<numStudents;i++){
		cout<<"Enter the age of student "<<i+1<<": ";
		cin>>(*(s+i)).age;
	}
		for(int i=0;i<numStudents;i++){
		cout<<"Enter the address of student "<<i+1<<": ";
		cin>>(*(s+i)).address;
	}
		for(int i=0;i<numStudents;i++){
		cout<<"Enter the roll number of student "<<i+1<<": ";
		cin>>(*(s+i)).rollNum;
	}
}
int main(){
	int rollNum,age,numStudents;
	string name,address;
	while(numStudents<=10){
	cout<<"Enter the number of students: ";
	cin>>numStudents;
	if(numStudents<=10){
		cout<<"Number of students must be greater than 10 "<<"\n";
	}
}
	student* s= new student[numStudents];
	input(numStudents, s);
	s->age14(s,numStudents);
	s->evenRollNum(s,numStudents);
	s->rollNumberByUser(s,numStudents);

}
