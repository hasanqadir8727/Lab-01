#include<iostream>
using namespace std;
bool strongPassword(string password){
	for(int i=0;i<password.length();i++){
	if((password[i]>='A' && password[i]<='Z') || (password[i]>='a' && password[i]<='z') || (password[i]>='0' && password[i]<='9') ){
		return true;		
	}
	
}
	return false;
}
int main(){
	string userName, password, userName2, password2;
	cout<<"---Sign Up---\n";
	cout<<"Username: ";
	cin>>userName;
	cout<<"Password: ";
	cin>>password;
	while (!strongPassword(password)){	
	cout<<"Password is not strong enough. \nEnter a new password: ";
	cin>>password;
	}
	
	cout<<"Account created successfully!\n";
	cout<<"\n\n---Login---\n";
	do{
	cout<<"Username: ";
	cin>>userName2;
	cout<<"Password: ";
	cin>>password2;
	if(userName!=userName2 || password!=password2){
		cout<<"Incorrect username or password!\n";
	}
}while(userName!=userName2 || password!=password2);
	cout<<"\nLogged in successfully!";
}
