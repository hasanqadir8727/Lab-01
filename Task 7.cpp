#include <iostream>
using namespace std;
class BankAccount{
	private:
	float balance=0;
	public:
	string name;
	int accountNum;
	BankAccount(string name, int accountNum){
		this->name=name;
		this->accountNum=accountNum;
	}
	void setBalance(float balance){
		this->balance=balance;
	}	
	float getBalance(){
		return balance;
	}
	void deposit(int amount){
		balance+=amount;
		cout<<amount<<" diposited successfully";
	}
	void withdraw(int amount){
		if(amount<balance){
		balance-=amount;
		cout<<amount<<" withdrawn successfully!";
	}
		else{
			cout<<"Error! you do not have enough balance to withdraw this amount";
		}
	}
	void display(){
		cout<<"Name: "<<name;
		cout<<"Balance: "<<balance;
	}
	
};
int main(){
	string name;
	int accountNum;
	int choice;
	float amount;
	cout<<"Name: ";
	cin>> name;
	cout<<"Account Number: ";
	cin>>accountNum;
	BankAccount b(name,accountNum);
	while(choice!=4){
	cout<<"1. Deposit Amount \n2. Withdraw amount \n3.Display Name and Balance\n4.Exit\n";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter the amount you want to deposit: ";
			cin>>amount;
			b.deposit(amount);
			break;
		case 2:
			cout<<"Enter the amount you want to withdraw: ";
			cin>>amount;
			b.withdraw(amount);
			break;
		case 3:
			b.display();
			break;	
	}}
}