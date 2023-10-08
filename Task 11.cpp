#include <iostream>
using namespace std;
class Bank{
	private:
	float balance=0;
	public:
	float amount,interest;
	int transations=0;
	
	void deposit(int amount){
		balance+=amount;
		cout<<amount<<" diposited successfully\n"<<endl;
		transations++;
	}
	void withdraw(int amount){
		if(amount<balance){
		balance-=amount;
		cout<<amount<<" withdrawn successfully!\n"<<endl;
		transations++;
	}
		else{
			cout<<"Insufficient balance!\n";
		}
	}
	void displayBalance(){
		cout<<"Your current balance is: "<<balance<<endl;
	}
	void displayTransations(){
		cout<<"Number of transations: "<<transations<<endl;
	}
	void addInterest(int years){
		cout<<"The interest rate is 15.5%";
		interest=(balance*15.5*years)/100;
		cout<<"Your current intrest is: "<<interest<<endl;
		balance+=interest;
		cout<<"You balance is now: "<<balance<<endl;
	}
	void displayInterest(int years){
		cout<<"The interest rate is 15.5%";
		interest=(balance*15.5*years)/100;
		cout<<"The intrest you earned in "<<years<<" is: "<<interest<<endl;
	}
};
int main(){
	float amount;
	int years, choice=0;
	Bank b;
	do{
		cout<<"\n\n";
	cout<<"1. Display the account balance \n2. Display the number of transactions \n3. Display interest earned for this period \n4. Make a deposit \n5. Make a withdrawal \n6. Add interest for this period \n7. Exit the program \n";
	cin>>choice;
	switch(choice){
		case 1:
			b.displayBalance();
			break;
		case 2:
			b.displayTransations();
			break;
		case 3:
			cout<<"Enter the number of years: ";
			cin>>years;
			b.displayInterest(years);
			break;
		case 4:
			cout<<"Enter the amount you want to deposit: ";
			cin>>amount;
			b.deposit(amount);
			break;
		case 5:
			cout<<"Enter the amount you want to withdraw: ";
			cin>>amount;
			b.withdraw(amount);
			break;
		case 6:
			cout<<"Enter the number of years: ";
			cin>>years;
			b.addInterest(years);
			break;
		case 7:
			break;	
	}}while(choice!=7);
}
	
