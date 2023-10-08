#include <iostream>
using namespace std;
class Student{
	public:
		string name, rollNum;
		float* marks= new float[4];
		float totalMarks;
		float percentage;
		void input(){
			cout<<"Name: ";
			cin>>name;
			cout<<"Roll Number: ";
			cin>>rollNum;
			for(int i=0;i<4;i++){
				cout<<"Enter marks (out of 100) for subject "<<i+1<<": ";
				cin>> *(marks+i);
			}
		}
		void calPercentage(){
			for(int i=0;i<4;i++){
				totalMarks+=*(marks+i);
			}	
			percentage=(totalMarks/400)*100;
			cout<<"Your current percentage is: "<<percentage<<endl;
		}
		void diplay(){
			cout<<"Name: "<<name<<endl;
			cout<<"Roll Number: "<<rollNum<<endl;
			for(int i=0;i<4;i++){
				cout<<"Marks (out of 100) in subject "<<i+1<<": "<<*(marks+i);
				cout<<"\n";
			}
			cout<<"Percentage: "<<percentage;
			cout<<"\n";

		}
};

	int main(){
		int choice=0,choice2=0;
		Student s;
		do{
		cout<<"Choose one of the following \n1.Start/Continue the program \n2.Stop the program\n";
		cin>>choice;
		switch (choice){
			case 1:
				cout<<"1.Input the details of the student \n2.Calculate Percentage \n3.Display all infromation\n";
				cin>>choice2;
				switch (choice2){
					case 1:
						s.input();
						break;
					case 2:
						s.calPercentage();
						break;
					case 3:
						s.diplay();
						break;	
				}
				break;
			case 2:
				break;	
		}
	}while(choice!=2);
	}