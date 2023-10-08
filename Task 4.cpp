#include<iostream>
using namespace std;
int main(){
	string name;
	float * testScores= new float[5];
	float totalOfScores=0;
	float avgScore;
	cout<<"Enter the name of the student:";
	cin>>name;
	for(int i=0;i<5;i++){
		cout<<"Test "<< i+1<<" score:";
		cin>>*(testScores+i);
		totalOfScores+=*(testScores+i);
	}
	cout<<"Student Name:"<<name<<endl;
	cout<<"Test Scores: ";
	for(int i=0;i<5;i++){
		cout<<*(testScores+i)<<" ";
	}
	cout<< endl;
	avgScore=totalOfScores/5;
	cout<<"Average test score: "<<avgScore;
	
	
}