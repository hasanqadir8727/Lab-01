#include <iostream>
using namespace std;
int main(){
	float height,weight;
	float bmi;
	cout<<"Enter your weight (in pounds):";
	cin>>weight;
	cout<<"Enter your height (in inches): ";
	cin>>height;
	bmi=weight/height;
	cout<<"Your body mass index is: "<<bmi <<endl;
	if(bmi<18.5){
		cout<<"You are underweight";
	}
	else if(bmi>18.5 && bmi<24.9){
		cout<<"Your bmi is considered normal";
	}
	else if(bmi>25 && bmi<29.9){
		cout<<"You are overweight";
	}
	else{
		cout<<"You are obese";
	}
}