#include <iostream>
using namespace std;
class CounterType{
	public:
	int count=0;
	void setCounter(int count){
		this->count=count;
	}
	void increaseCount(){
		count++;
	}
	void decreaseCount(){
		count --;
	}
	void resetCount(){
		count=0;
	}
	void displayCount(){
		cout<<"Total Count: "<<count<<endl;
		cout<<"\n \n";
	}
};
int main(){
	int choice=0;
	int count=0;
	CounterType c;
	do{
		cout<<"Choose one of the following: \n1.Intialize count \n2.Increase Count \n3.Decrease Count \n4.Display Count \n5.Reset Count \n6.Exit\n";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter count:";
				cin>>count;
				c.setCounter(count);
				break;
			case 2:
				c.increaseCount();
				break;	
			case 3:
				c.decreaseCount();
				break;
			case 4:
				c.displayCount();
				break;
			case 5:
				c.resetCount();
				break;
			case 6:
				break;
		}
}while(choice!=6);
}